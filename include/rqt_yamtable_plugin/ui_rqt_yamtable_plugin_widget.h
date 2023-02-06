/********************************************************************************
** Form generated from reading UI file 'rqt_yamtable_plugin_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RQT_YAMTABLE_PLUGIN_WIDGET_H
#define UI_RQT_YAMTABLE_PLUGIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YamtablePluginWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *start_box;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *speed_save;
    QLineEdit *global_speed;
    QLabel *label_19;
    QLineEdit *pick_speed;
    QLabel *txt_pick_3;
    QLineEdit *place_speed;
    QLabel *txt_place_3;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QGroupBox *robot_box_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *force_value;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *gripper_save;
    QGroupBox *camera_box;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *camera_on;
    QPushButton *camera_off;
    QLabel *label_17;
    QGroupBox *start_box_2;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *start_piece_picking;
    QPushButton *stop_piece_picking;
    QGroupBox *robot_box;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *servo_on;
    QPushButton *servo_off;
    QLabel *label_18;
    QGroupBox *product_box;
    QLabel *label_23;
    QLineEdit *order_0;
    QLabel *label_24;
    QLineEdit *order_1;
    QLineEdit *order_2;
    QLineEdit *order_3;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *product_save;

    void setupUi(QWidget *YamtablePluginWidget)
    {
        if (YamtablePluginWidget->objectName().isEmpty())
            YamtablePluginWidget->setObjectName(QStringLiteral("YamtablePluginWidget"));
        YamtablePluginWidget->resize(800, 700);
        gridLayout = new QGridLayout(YamtablePluginWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        start_box = new QGroupBox(YamtablePluginWidget);
        start_box->setObjectName(QStringLiteral("start_box"));
        QFont font;
        font.setPointSize(18);
        start_box->setFont(font);
        start_box->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayoutWidget_10 = new QWidget(start_box);
        horizontalLayoutWidget_10->setObjectName(QStringLiteral("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(280, 40, 101, 41));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_10->setContentsMargins(6, 0, 6, 0);
        speed_save = new QPushButton(horizontalLayoutWidget_10);
        speed_save->setObjectName(QStringLiteral("speed_save"));
        speed_save->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(speed_save->sizePolicy().hasHeightForWidth());
        speed_save->setSizePolicy(sizePolicy);
        speed_save->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(16);
        speed_save->setFont(font1);

        horizontalLayout_10->addWidget(speed_save);

        global_speed = new QLineEdit(start_box);
        global_speed->setObjectName(QStringLiteral("global_speed"));
        global_speed->setGeometry(QRect(140, 70, 50, 25));
        QFont font2;
        font2.setPointSize(14);
        global_speed->setFont(font2);
        global_speed->setMaxLength(3);
        global_speed->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(start_box);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 65, 120, 31));
        QFont font3;
        font3.setPointSize(12);
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pick_speed = new QLineEdit(start_box);
        pick_speed->setObjectName(QStringLiteral("pick_speed"));
        pick_speed->setGeometry(QRect(140, 120, 50, 25));
        pick_speed->setFont(font2);
        pick_speed->setMaxLength(3);
        pick_speed->setAlignment(Qt::AlignCenter);
        txt_pick_3 = new QLabel(start_box);
        txt_pick_3->setObjectName(QStringLiteral("txt_pick_3"));
        txt_pick_3->setGeometry(QRect(10, 116, 120, 31));
        txt_pick_3->setFont(font3);
        txt_pick_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        place_speed = new QLineEdit(start_box);
        place_speed->setObjectName(QStringLiteral("place_speed"));
        place_speed->setGeometry(QRect(140, 170, 50, 25));
        place_speed->setFont(font2);
        place_speed->setMaxLength(3);
        place_speed->setAlignment(Qt::AlignCenter);
        txt_place_3 = new QLabel(start_box);
        txt_place_3->setObjectName(QStringLiteral("txt_place_3"));
        txt_place_3->setGeometry(QRect(10, 166, 120, 31));
        txt_place_3->setFont(font3);
        txt_place_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_20 = new QLabel(start_box);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(200, 70, 16, 25));
        label_20->setFont(font3);
        label_21 = new QLabel(start_box);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(200, 120, 16, 25));
        label_21->setFont(font3);
        label_22 = new QLabel(start_box);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(200, 170, 16, 25));
        label_22->setFont(font3);

        gridLayout->addWidget(start_box, 1, 1, 1, 1);

        robot_box_2 = new QGroupBox(YamtablePluginWidget);
        robot_box_2->setObjectName(QStringLiteral("robot_box_2"));
        robot_box_2->setFont(font);
        robot_box_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalSlider = new QSlider(robot_box_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 170, 250, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(robot_box_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 170, 40));
        force_value = new QLabel(robot_box_2);
        force_value->setObjectName(QStringLiteral("force_value"));
        force_value->setGeometry(QRect(248, 100, 30, 40));
        force_value->setScaledContents(false);
        label_3 = new QLabel(robot_box_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 100, 30, 40));
        label_3->setScaledContents(false);
        horizontalLayoutWidget_11 = new QWidget(robot_box_2);
        horizontalLayoutWidget_11->setObjectName(QStringLiteral("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(280, 40, 101, 41));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_11->setContentsMargins(6, 0, 6, 0);
        gripper_save = new QPushButton(horizontalLayoutWidget_11);
        gripper_save->setObjectName(QStringLiteral("gripper_save"));
        gripper_save->setEnabled(true);
        sizePolicy.setHeightForWidth(gripper_save->sizePolicy().hasHeightForWidth());
        gripper_save->setSizePolicy(sizePolicy);
        gripper_save->setMinimumSize(QSize(0, 30));
        gripper_save->setFont(font1);

        horizontalLayout_11->addWidget(gripper_save);


        gridLayout->addWidget(robot_box_2, 3, 0, 1, 1);

        camera_box = new QGroupBox(YamtablePluginWidget);
        camera_box->setObjectName(QStringLiteral("camera_box"));
        camera_box->setFont(font);
        camera_box->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        camera_box->setFlat(false);
        horizontalLayoutWidget_8 = new QWidget(camera_box);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(20, 130, 351, 81));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_8->setContentsMargins(6, 0, 6, 0);
        camera_on = new QPushButton(horizontalLayoutWidget_8);
        camera_on->setObjectName(QStringLiteral("camera_on"));
        camera_on->setEnabled(true);
        sizePolicy.setHeightForWidth(camera_on->sizePolicy().hasHeightForWidth());
        camera_on->setSizePolicy(sizePolicy);
        camera_on->setMinimumSize(QSize(0, 60));
        camera_on->setFont(font1);

        horizontalLayout_8->addWidget(camera_on);

        camera_off = new QPushButton(horizontalLayoutWidget_8);
        camera_off->setObjectName(QStringLiteral("camera_off"));
        sizePolicy.setHeightForWidth(camera_off->sizePolicy().hasHeightForWidth());
        camera_off->setSizePolicy(sizePolicy);
        camera_off->setMinimumSize(QSize(0, 60));
        camera_off->setFont(font1);

        horizontalLayout_8->addWidget(camera_off);

        label_17 = new QLabel(camera_box);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(15, 50, 361, 61));
        label_17->setFont(font3);
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAutoFillBackground(false);
        label_17->setLineWidth(1);
        label_17->setMidLineWidth(0);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(camera_box, 0, 0, 1, 1);

        start_box_2 = new QGroupBox(YamtablePluginWidget);
        start_box_2->setObjectName(QStringLiteral("start_box_2"));
        start_box_2->setFont(font);
        start_box_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayoutWidget_12 = new QWidget(start_box_2);
        horizontalLayoutWidget_12->setObjectName(QStringLiteral("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(3, 140, 381, 81));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_12->setContentsMargins(6, 0, 6, 0);
        start_piece_picking = new QPushButton(horizontalLayoutWidget_12);
        start_piece_picking->setObjectName(QStringLiteral("start_piece_picking"));
        start_piece_picking->setEnabled(true);
        sizePolicy.setHeightForWidth(start_piece_picking->sizePolicy().hasHeightForWidth());
        start_piece_picking->setSizePolicy(sizePolicy);
        start_piece_picking->setMinimumSize(QSize(0, 60));
        start_piece_picking->setFont(font1);

        horizontalLayout_12->addWidget(start_piece_picking);

        stop_piece_picking = new QPushButton(horizontalLayoutWidget_12);
        stop_piece_picking->setObjectName(QStringLiteral("stop_piece_picking"));
        sizePolicy.setHeightForWidth(stop_piece_picking->sizePolicy().hasHeightForWidth());
        stop_piece_picking->setSizePolicy(sizePolicy);
        stop_piece_picking->setMinimumSize(QSize(0, 60));
        stop_piece_picking->setFont(font1);

        horizontalLayout_12->addWidget(stop_piece_picking);


        gridLayout->addWidget(start_box_2, 3, 1, 1, 1);

        robot_box = new QGroupBox(YamtablePluginWidget);
        robot_box->setObjectName(QStringLiteral("robot_box"));
        robot_box->setFont(font);
        robot_box->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayoutWidget_9 = new QWidget(robot_box);
        horizontalLayoutWidget_9->setObjectName(QStringLiteral("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(20, 130, 351, 81));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_9->setContentsMargins(6, 0, 6, 0);
        servo_on = new QPushButton(horizontalLayoutWidget_9);
        servo_on->setObjectName(QStringLiteral("servo_on"));
        servo_on->setEnabled(true);
        sizePolicy.setHeightForWidth(servo_on->sizePolicy().hasHeightForWidth());
        servo_on->setSizePolicy(sizePolicy);
        servo_on->setMinimumSize(QSize(0, 60));
        servo_on->setFont(font1);

        horizontalLayout_9->addWidget(servo_on);

        servo_off = new QPushButton(horizontalLayoutWidget_9);
        servo_off->setObjectName(QStringLiteral("servo_off"));
        sizePolicy.setHeightForWidth(servo_off->sizePolicy().hasHeightForWidth());
        servo_off->setSizePolicy(sizePolicy);
        servo_off->setMinimumSize(QSize(0, 60));
        servo_off->setFont(font1);

        horizontalLayout_9->addWidget(servo_off);

        label_18 = new QLabel(robot_box);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(15, 50, 361, 61));
        label_18->setFont(font3);
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAutoFillBackground(false);
        label_18->setLineWidth(1);
        label_18->setMidLineWidth(0);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(robot_box, 0, 1, 1, 1);

        product_box = new QGroupBox(YamtablePluginWidget);
        product_box->setObjectName(QStringLiteral("product_box"));
        product_box->setFont(font);
        product_box->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_23 = new QLabel(product_box);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 98, 65, 31));
        label_23->setFont(font2);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        order_0 = new QLineEdit(product_box);
        order_0->setObjectName(QStringLiteral("order_0"));
        order_0->setGeometry(QRect(140, 100, 40, 30));
        order_0->setFont(font2);
        order_0->setMaxLength(1);
        order_0->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(product_box);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(60, 150, 280, 61));
        label_24->setFont(font2);
        label_24->setLineWidth(-1);
        label_24->setMargin(0);
        label_24->setIndent(-1);
        order_1 = new QLineEdit(product_box);
        order_1->setObjectName(QStringLiteral("order_1"));
        order_1->setGeometry(QRect(190, 100, 40, 30));
        order_1->setFont(font2);
        order_1->setMaxLength(1);
        order_1->setAlignment(Qt::AlignCenter);
        order_2 = new QLineEdit(product_box);
        order_2->setObjectName(QStringLiteral("order_2"));
        order_2->setGeometry(QRect(240, 100, 40, 30));
        order_2->setFont(font2);
        order_2->setMaxLength(1);
        order_2->setAlignment(Qt::AlignCenter);
        order_3 = new QLineEdit(product_box);
        order_3->setObjectName(QStringLiteral("order_3"));
        order_3->setGeometry(QRect(290, 100, 40, 30));
        order_3->setFont(font2);
        order_3->setMaxLength(1);
        order_3->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_13 = new QWidget(product_box);
        horizontalLayoutWidget_13->setObjectName(QStringLiteral("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(280, 40, 101, 41));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_13->setContentsMargins(6, 0, 6, 0);
        product_save = new QPushButton(horizontalLayoutWidget_13);
        product_save->setObjectName(QStringLiteral("product_save"));
        product_save->setEnabled(true);
        sizePolicy.setHeightForWidth(product_save->sizePolicy().hasHeightForWidth());
        product_save->setSizePolicy(sizePolicy);
        product_save->setMinimumSize(QSize(0, 30));
        product_save->setFont(font1);

        horizontalLayout_13->addWidget(product_save);


        gridLayout->addWidget(product_box, 1, 0, 1, 1);


        retranslateUi(YamtablePluginWidget);

        QMetaObject::connectSlotsByName(YamtablePluginWidget);
    } // setupUi

    void retranslateUi(QWidget *YamtablePluginWidget)
    {
        YamtablePluginWidget->setWindowTitle(QApplication::translate("YamtablePluginWidget", "YamtablePlugin", Q_NULLPTR));
        start_box->setTitle(QApplication::translate("YamtablePluginWidget", "Robot speed", Q_NULLPTR));
        speed_save->setText(QApplication::translate("YamtablePluginWidget", "Save", Q_NULLPTR));
        global_speed->setText(QApplication::translate("YamtablePluginWidget", "30", Q_NULLPTR));
        label_19->setText(QApplication::translate("YamtablePluginWidget", "Global Speed :", Q_NULLPTR));
        pick_speed->setText(QApplication::translate("YamtablePluginWidget", "50", Q_NULLPTR));
        txt_pick_3->setText(QApplication::translate("YamtablePluginWidget", "Pick Speed : ", Q_NULLPTR));
        place_speed->setText(QApplication::translate("YamtablePluginWidget", "50", Q_NULLPTR));
        txt_place_3->setText(QApplication::translate("YamtablePluginWidget", "Place Speed : ", Q_NULLPTR));
        label_20->setText(QApplication::translate("YamtablePluginWidget", "%", Q_NULLPTR));
        label_21->setText(QApplication::translate("YamtablePluginWidget", "%", Q_NULLPTR));
        label_22->setText(QApplication::translate("YamtablePluginWidget", "%", Q_NULLPTR));
        robot_box_2->setTitle(QApplication::translate("YamtablePluginWidget", "Gripper", Q_NULLPTR));
        label->setText(QApplication::translate("YamtablePluginWidget", "Push strength :", Q_NULLPTR));
        force_value->setText(QApplication::translate("YamtablePluginWidget", "00", Q_NULLPTR));
        label_3->setText(QApplication::translate("YamtablePluginWidget", "N", Q_NULLPTR));
        gripper_save->setText(QApplication::translate("YamtablePluginWidget", "Save", Q_NULLPTR));
        camera_box->setTitle(QApplication::translate("YamtablePluginWidget", "Camera", Q_NULLPTR));
        camera_on->setText(QApplication::translate("YamtablePluginWidget", "Camera On", Q_NULLPTR));
        camera_off->setText(QApplication::translate("YamtablePluginWidget", "Camera Off", Q_NULLPTR));
        label_17->setText(QApplication::translate("YamtablePluginWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#000000;\">[Information]</span></p><p align=\"center\"><span style=\" font-size:14pt;\">You can check cameras in image view tab.</span></p></body></html>", Q_NULLPTR));
        start_box_2->setTitle(QApplication::translate("YamtablePluginWidget", "Task", Q_NULLPTR));
        start_piece_picking->setText(QApplication::translate("YamtablePluginWidget", "Start", Q_NULLPTR));
        stop_piece_picking->setText(QApplication::translate("YamtablePluginWidget", "Stop", Q_NULLPTR));
        robot_box->setTitle(QApplication::translate("YamtablePluginWidget", "Robot", Q_NULLPTR));
        servo_on->setText(QApplication::translate("YamtablePluginWidget", "Power On", Q_NULLPTR));
        servo_off->setText(QApplication::translate("YamtablePluginWidget", "Power Off", Q_NULLPTR));
        label_18->setText(QApplication::translate("YamtablePluginWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#ef2929;\">[Warning]</span></p><p align=\"center\"><span style=\" font-size:14pt; color:#ef2929;\">Grab teaching pendant for safety.</span></p></body></html>", Q_NULLPTR));
        product_box->setTitle(QApplication::translate("YamtablePluginWidget", "Products", Q_NULLPTR));
        label_23->setText(QApplication::translate("YamtablePluginWidget", "Order :", Q_NULLPTR));
        order_0->setText(QApplication::translate("YamtablePluginWidget", "0", Q_NULLPTR));
        label_24->setText(QApplication::translate("YamtablePluginWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0 : Sea squirt	1 : Cockle</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2 : Eel		3 : Ice pack</p></body></html>", Q_NULLPTR));
        order_1->setText(QApplication::translate("YamtablePluginWidget", "1", Q_NULLPTR));
        order_2->setText(QApplication::translate("YamtablePluginWidget", "2", Q_NULLPTR));
        order_3->setText(QApplication::translate("YamtablePluginWidget", "3", Q_NULLPTR));
        product_save->setText(QApplication::translate("YamtablePluginWidget", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class YamtablePluginWidget: public Ui_YamtablePluginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RQT_YAMTABLE_PLUGIN_WIDGET_H
