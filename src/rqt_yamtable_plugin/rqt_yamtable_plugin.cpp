#include <rqt_yamtable_plugin/rqt_yamtable_plugin.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace rqt_yamtable_plugin
{
YamtablePlugin::YamtablePlugin() : rqt_gui_cpp::Plugin()
{
  setObjectName("YamtablePlugin");
}

void YamtablePlugin::initPlugin(qt_gui_cpp::PluginContext& context)
{
  ros::NodeHandle nh = getNodeHandle();

  widget_ = new QWidget();
  ui_.setupUi(widget_);
  context.addWidget(widget_);
  connect(ui_.camera_on, SIGNAL(clicked(bool)), this, SLOT(onCameraOnClicked()));
  connect(ui_.camera_off, SIGNAL(clicked(bool)), this, SLOT(onCameraOffClicked()));

  connect(ui_.product_save, SIGNAL(clicked(bool)), this, SLOT(onOrderSaveClicked()));

  connect(ui_.servo_on, SIGNAL(clicked(bool)), this, SLOT(onPowerOnClicked()));
  connect(ui_.servo_off, SIGNAL(clicked(bool)), this, SLOT(onPowerOffClicked()));

  connect(ui_.start_piece_picking, SIGNAL(clicked(bool)), this, SLOT(onStartClicked()));
  connect(ui_.stop_piece_picking, SIGNAL(clicked(bool)), this, SLOT(onStopClicked()));

  connect(ui_.horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(onVerticalBarChanged()));

  connect(ui_.gripper_save, SIGNAL(clicked(bool)), this, SLOT(onGripperSaveClicked()));
  connect(ui_.speed_save, SIGNAL(clicked(bool)), this, SLOT(onSpeedSaveClicked()));

  power_control_sc_ =
      nh.serviceClient<robostar_hardware_interface::ServoPower>("robostar_hardware_interface/servo_power_control");
  task_start_pub_ = nh.advertise<std_msgs::String>("start_piece_picking", 1);

  pick_process_ = nullptr;
  place_process_ = nullptr;
}

void YamtablePlugin::shutdownPlugin()
{
  delete widget_;
  delete pick_process_;
}

void YamtablePlugin::saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const
{
}

void YamtablePlugin::restoreSettings(const qt_gui_cpp::Settings& plugin_settings,
                                     const qt_gui_cpp::Settings& instance_settings)
{
}

void YamtablePlugin::onCameraOnClicked()
{
  if (pick_process_ == nullptr)
  {
    QString pick_program = "~/yamtable_exe/plaif_vision_pick/plaif_vision_pick";
    QString place_program = "~/yamtable_exe/plaif_vision_place/plaif_vision_place";

    pick_process_ = new QProcess(this);
    place_process_ = new QProcess(this);

    pick_process_->start(pick_program);
    place_process_->start(place_program);

    ROS_INFO("[YAMTABLE]Camera on");
  }
  else
  {
    ROS_INFO("[YAMTABLE] Camera already enabled");
  }
}

void YamtablePlugin::onCameraOffClicked()
{
  ROS_INFO("[YAMTABLE] Camera off");
}

void YamtablePlugin::onOrderSaveClicked()
{
  std::vector<std::string> order = { ui_.order_0->text().toStdString(), ui_.order_1->text().toStdString(),
                                     ui_.order_2->text().toStdString(), ui_.order_3->text().toStdString() };

  ros::param::set("user_config/object_order", order);

  ROS_INFO_STREAM("[YAMTABLE] Order saved : " << order[0] << ", " << order[1] << ", " << order[2] << ", " << order[3]);
}

void YamtablePlugin::onPowerOnClicked()
{
  robostar_hardware_interface::ServoPower service;
  service.request.is_on = true;
  power_control_sc_.call(service);
  ROS_INFO("[YAMTABLE] Power on");
}

void YamtablePlugin::onPowerOffClicked()
{
  robostar_hardware_interface::ServoPower service;
  service.request.is_on = false;
  power_control_sc_.call(service);
  ROS_INFO("[YAMTABLE] Power off");
}

void YamtablePlugin::onStartClicked()
{
  std_msgs::String msg;
  task_start_pub_.publish(msg);

  ROS_INFO("[YAMTABLE] Start piece picking");
}

void YamtablePlugin::onStopClicked()
{
  ROS_INFO("[YAMTABLE] Stop piece picking");
}

void YamtablePlugin::onVerticalBarChanged()
{
  int value = ui_.horizontalSlider->value() / 4;
  ui_.force_value->setText(QString::number(value));
}

void YamtablePlugin::onGripperSaveClicked()
{
  int value = -ui_.horizontalSlider->value() / 4;

  ros::param::set("piece_picking/target_trigger_force", value);

  ROS_INFO("[YAMTABLE] Push strength saved.");
}

void YamtablePlugin::onSpeedSaveClicked()
{
  float global_value = ui_.global_speed->text().toFloat() / 100;
  float pick_value = ui_.pick_speed->text().toFloat() / 100;
  float place_value = ui_.place_speed->text().toFloat() / 100;

  ros::param::set("piece_picking/global_velocity", global_value);
  ros::param::set("piece_picking/global_acceleration", global_value);

  ros::param::set("piece_picking/pick_velocity", pick_value);
  ros::param::set("piece_picking/pick_acceleration", pick_value);

  ros::param::set("piece_picking/place_velocity", place_value);
  ros::param::set("piece_picking/place_acceleration", place_value);

  ROS_INFO("[YAMTABLE] Robot speed saved.");
}

}  // end namespace rqt_yamtable_plugin

PLUGINLIB_EXPORT_CLASS(rqt_yamtable_plugin::YamtablePlugin, rqt_gui_cpp::Plugin)
