#ifndef RQT_YAMTABLE_PLUGIN
#define RQT_YAMTABLE_PLUGIN

#include <rqt_gui_cpp/plugin.h>
#include <std_msgs/String.h>
#include <ros/ros.h>
#include <qt5/QtCore/qprocess.h>

#include <ui_rqt_yamtable_plugin_widget.h>
#include <robostar_hardware_interface/ServoPower.h>

namespace rqt_yamtable_plugin
{
class YamtablePlugin : public rqt_gui_cpp::Plugin
{
  Q_OBJECT
public:
  YamtablePlugin();

  void initPlugin(qt_gui_cpp::PluginContext& context) override;
  void shutdownPlugin() override;

  void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const override;
  void restoreSettings(const qt_gui_cpp::Settings& plugin_settings,
                       const qt_gui_cpp::Settings& instance_settings) override;

public Q_SLOTS:
  void onCameraOnClicked();
  void onCameraOffClicked();
  void onOrderSaveClicked();
  void onPowerOnClicked();
  void onPowerOffClicked();
  void onStartClicked();
  void onStopClicked();
  void onVerticalBarChanged();
  void onGripperSaveClicked();
  void onSpeedSaveClicked();

protected:
  QWidget* widget_;
  Ui::YamtablePluginWidget ui_;

private:
  ros::ServiceClient power_control_sc_;
  ros::Publisher task_start_pub_;

  QProcess* pick_process_;
  QProcess* place_process_;
};

}  // namespace rqt_yamtable_plugin

#endif  // RQT_YAMTABLE_PLUGIN
