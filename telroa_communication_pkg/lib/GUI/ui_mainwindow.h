/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *WG_TOP;
    QPushButton *BT_QUIT;
    QPushButton *BT_SCALE_UP;
    QPushButton *BT_MINIMIZE;
    QLabel *LOGO;
    QWidget *widget;
    QOpenGLWidget *GL_VIDEO_DEPTH;
    QPushButton *BT_E_STOP;
    QWidget *WG_ROBOT_STATE;
    QFrame *FR_ROBOT_STATE;
    QGroupBox *GB_ROBOT_STATE;
    QLineEdit *LE_ROBOT_CONN;
    QLineEdit *LE_ROBOT_STATE;
    QLineEdit *LE_ROBOT_CONN_1;
    QWidget *WG_TELCON_STATE;
    QFrame *FR_TELCON_STATE;
    QGroupBox *GB_TELCON_L_STATE;
    QLineEdit *LE_TELCON_L_CONN;
    QLineEdit *LE_TELCON_L_STATE;
    QGroupBox *GB_TELCON_R_STATE;
    QLineEdit *LE_TELCON_R_CONN;
    QLineEdit *LE_TELCON_R_STATE;
    QOpenGLWidget *GL_VIDEO_RGB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        WG_TOP = new QWidget(centralwidget);
        WG_TOP->setObjectName(QString::fromUtf8("WG_TOP"));
        WG_TOP->setGeometry(QRect(10, 0, 1920, 141));
        BT_QUIT = new QPushButton(WG_TOP);
        BT_QUIT->setObjectName(QString::fromUtf8("BT_QUIT"));
        BT_QUIT->setGeometry(QRect(1800, 20, 100, 100));
        BT_QUIT->setMinimumSize(QSize(100, 100));
        BT_QUIT->setMaximumSize(QSize(100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 41, 41, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 147, 147, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 94, 94, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 20, 20, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 27, 27, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 148, 148, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        BT_QUIT->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(50);
        BT_QUIT->setFont(font);
        BT_SCALE_UP = new QPushButton(WG_TOP);
        BT_SCALE_UP->setObjectName(QString::fromUtf8("BT_SCALE_UP"));
        BT_SCALE_UP->setGeometry(QRect(1690, 20, 100, 100));
        BT_SCALE_UP->setMinimumSize(QSize(100, 100));
        BT_SCALE_UP->setMaximumSize(QSize(100, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(114, 159, 207, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(196, 225, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(155, 192, 231, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(57, 79, 103, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(76, 106, 138, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(184, 207, 231, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        BT_SCALE_UP->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tlwg Typist"));
        font1.setPointSize(50);
        BT_SCALE_UP->setFont(font1);
        BT_MINIMIZE = new QPushButton(WG_TOP);
        BT_MINIMIZE->setObjectName(QString::fromUtf8("BT_MINIMIZE"));
        BT_MINIMIZE->setGeometry(QRect(1580, 20, 100, 100));
        BT_MINIMIZE->setMinimumSize(QSize(100, 100));
        BT_MINIMIZE->setMaximumSize(QSize(100, 100));
        BT_MINIMIZE->setFont(font1);
        LOGO = new QLabel(WG_TOP);
        LOGO->setObjectName(QString::fromUtf8("LOGO"));
        LOGO->setGeometry(QRect(10, 10, 721, 121));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        LOGO->setFont(font2);
        LOGO->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 160, 1920, 1000));
        GL_VIDEO_DEPTH = new QOpenGLWidget(widget);
        GL_VIDEO_DEPTH->setObjectName(QString::fromUtf8("GL_VIDEO_DEPTH"));
        GL_VIDEO_DEPTH->setGeometry(QRect(90, 300, 800, 600));
        BT_E_STOP = new QPushButton(widget);
        BT_E_STOP->setObjectName(QString::fromUtf8("BT_E_STOP"));
        BT_E_STOP->setGeometry(QRect(1270, 20, 600, 191));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush16(QColor(255, 0, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush16);
        QBrush brush17(QColor(255, 127, 127, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(255, 63, 63, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(127, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(170, 0, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush21(QColor(165, 205, 255, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush21);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        QBrush brush22(QColor(9, 79, 209, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush22);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush22);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush23(QColor(145, 145, 145, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush22);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        BT_E_STOP->setPalette(palette2);
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        BT_E_STOP->setFont(font3);
        WG_ROBOT_STATE = new QWidget(widget);
        WG_ROBOT_STATE->setObjectName(QString::fromUtf8("WG_ROBOT_STATE"));
        WG_ROBOT_STATE->setGeometry(QRect(10, 10, 600, 211));
        FR_ROBOT_STATE = new QFrame(WG_ROBOT_STATE);
        FR_ROBOT_STATE->setObjectName(QString::fromUtf8("FR_ROBOT_STATE"));
        FR_ROBOT_STATE->setGeometry(QRect(10, 10, 580, 191));
        FR_ROBOT_STATE->setFrameShape(QFrame::StyledPanel);
        FR_ROBOT_STATE->setFrameShadow(QFrame::Raised);
        GB_ROBOT_STATE = new QGroupBox(FR_ROBOT_STATE);
        GB_ROBOT_STATE->setObjectName(QString::fromUtf8("GB_ROBOT_STATE"));
        GB_ROBOT_STATE->setGeometry(QRect(20, 0, 560, 191));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        GB_ROBOT_STATE->setFont(font4);
        LE_ROBOT_CONN = new QLineEdit(GB_ROBOT_STATE);
        LE_ROBOT_CONN->setObjectName(QString::fromUtf8("LE_ROBOT_CONN"));
        LE_ROBOT_CONN->setGeometry(QRect(170, 10, 380, 10));
        LE_ROBOT_CONN->setMouseTracking(false);
        LE_ROBOT_CONN->setReadOnly(true);
        LE_ROBOT_STATE = new QLineEdit(GB_ROBOT_STATE);
        LE_ROBOT_STATE->setObjectName(QString::fromUtf8("LE_ROBOT_STATE"));
        LE_ROBOT_STATE->setGeometry(QRect(0, 30, 550, 150));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LE_ROBOT_STATE->sizePolicy().hasHeightForWidth());
        LE_ROBOT_STATE->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(45);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setWeight(75);
        LE_ROBOT_STATE->setFont(font5);
        LE_ROBOT_STATE->setCursor(QCursor(Qt::ArrowCursor));
        LE_ROBOT_STATE->setMouseTracking(false);
        LE_ROBOT_STATE->setLayoutDirection(Qt::LeftToRight);
        LE_ROBOT_STATE->setAutoFillBackground(false);
        LE_ROBOT_STATE->setFrame(true);
        LE_ROBOT_STATE->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE->setReadOnly(true);
        LE_ROBOT_CONN_1 = new QLineEdit(FR_ROBOT_STATE);
        LE_ROBOT_CONN_1->setObjectName(QString::fromUtf8("LE_ROBOT_CONN_1"));
        LE_ROBOT_CONN_1->setGeometry(QRect(5, 5, 10, 180));
        LE_ROBOT_CONN_1->setMouseTracking(false);
        LE_ROBOT_CONN_1->setReadOnly(true);
        WG_TELCON_STATE = new QWidget(widget);
        WG_TELCON_STATE->setObjectName(QString::fromUtf8("WG_TELCON_STATE"));
        WG_TELCON_STATE->setGeometry(QRect(620, 10, 600, 211));
        FR_TELCON_STATE = new QFrame(WG_TELCON_STATE);
        FR_TELCON_STATE->setObjectName(QString::fromUtf8("FR_TELCON_STATE"));
        FR_TELCON_STATE->setGeometry(QRect(10, 10, 580, 191));
        FR_TELCON_STATE->setFrameShape(QFrame::StyledPanel);
        FR_TELCON_STATE->setFrameShadow(QFrame::Raised);
        GB_TELCON_L_STATE = new QGroupBox(FR_TELCON_STATE);
        GB_TELCON_L_STATE->setObjectName(QString::fromUtf8("GB_TELCON_L_STATE"));
        GB_TELCON_L_STATE->setGeometry(QRect(10, 0, 280, 191));
        GB_TELCON_L_STATE->setFont(font4);
        LE_TELCON_L_CONN = new QLineEdit(GB_TELCON_L_STATE);
        LE_TELCON_L_CONN->setObjectName(QString::fromUtf8("LE_TELCON_L_CONN"));
        LE_TELCON_L_CONN->setGeometry(QRect(10, 40, 260, 10));
        LE_TELCON_L_CONN->setMouseTracking(false);
        LE_TELCON_L_CONN->setReadOnly(true);
        LE_TELCON_L_STATE = new QLineEdit(GB_TELCON_L_STATE);
        LE_TELCON_L_STATE->setObjectName(QString::fromUtf8("LE_TELCON_L_STATE"));
        LE_TELCON_L_STATE->setGeometry(QRect(10, 60, 260, 120));
        sizePolicy.setHeightForWidth(LE_TELCON_L_STATE->sizePolicy().hasHeightForWidth());
        LE_TELCON_L_STATE->setSizePolicy(sizePolicy);
        LE_TELCON_L_STATE->setFont(font5);
        LE_TELCON_L_STATE->setCursor(QCursor(Qt::ArrowCursor));
        LE_TELCON_L_STATE->setMouseTracking(false);
        LE_TELCON_L_STATE->setLayoutDirection(Qt::LeftToRight);
        LE_TELCON_L_STATE->setAutoFillBackground(false);
        LE_TELCON_L_STATE->setFrame(true);
        LE_TELCON_L_STATE->setAlignment(Qt::AlignCenter);
        LE_TELCON_L_STATE->setReadOnly(true);
        GB_TELCON_R_STATE = new QGroupBox(FR_TELCON_STATE);
        GB_TELCON_R_STATE->setObjectName(QString::fromUtf8("GB_TELCON_R_STATE"));
        GB_TELCON_R_STATE->setGeometry(QRect(295, 30, 280, 161));
        GB_TELCON_R_STATE->setFont(font4);
        LE_TELCON_R_CONN = new QLineEdit(GB_TELCON_R_STATE);
        LE_TELCON_R_CONN->setObjectName(QString::fromUtf8("LE_TELCON_R_CONN"));
        LE_TELCON_R_CONN->setGeometry(QRect(10, 10, 260, 10));
        LE_TELCON_R_CONN->setMouseTracking(false);
        LE_TELCON_R_CONN->setReadOnly(true);
        LE_TELCON_R_STATE = new QLineEdit(GB_TELCON_R_STATE);
        LE_TELCON_R_STATE->setObjectName(QString::fromUtf8("LE_TELCON_R_STATE"));
        LE_TELCON_R_STATE->setGeometry(QRect(10, 30, 260, 120));
        sizePolicy.setHeightForWidth(LE_TELCON_R_STATE->sizePolicy().hasHeightForWidth());
        LE_TELCON_R_STATE->setSizePolicy(sizePolicy);
        LE_TELCON_R_STATE->setFont(font5);
        LE_TELCON_R_STATE->setCursor(QCursor(Qt::ArrowCursor));
        LE_TELCON_R_STATE->setMouseTracking(false);
        LE_TELCON_R_STATE->setLayoutDirection(Qt::LeftToRight);
        LE_TELCON_R_STATE->setAutoFillBackground(false);
        LE_TELCON_R_STATE->setFrame(true);
        LE_TELCON_R_STATE->setAlignment(Qt::AlignCenter);
        LE_TELCON_R_STATE->setReadOnly(true);
        GL_VIDEO_RGB = new QOpenGLWidget(widget);
        GL_VIDEO_RGB->setObjectName(QString::fromUtf8("GL_VIDEO_RGB"));
        GL_VIDEO_RGB->setGeometry(QRect(1000, 300, 800, 600));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        WG_TOP->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BT_QUIT->setText(QCoreApplication::translate("MainWindow", "\342\234\225", nullptr));
        BT_SCALE_UP->setText(QCoreApplication::translate("MainWindow", "\342\226\241", nullptr));
        BT_MINIMIZE->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        LOGO->setText(QCoreApplication::translate("MainWindow", "[ TelRoA Console ]", nullptr));
        BT_E_STOP->setText(QCoreApplication::translate("MainWindow", "EMERGENCY\n"
"STOP", nullptr));
        GB_ROBOT_STATE->setTitle(QCoreApplication::translate("MainWindow", "ROBOT STATE", nullptr));
        LE_ROBOT_STATE->setText(QCoreApplication::translate("MainWindow", "DISCONNECTED", nullptr));
        GB_TELCON_L_STATE->setTitle(QCoreApplication::translate("MainWindow", "CONTROLLER STATE", nullptr));
        LE_TELCON_L_STATE->setText(QCoreApplication::translate("MainWindow", "LEFT", nullptr));
        GB_TELCON_R_STATE->setTitle(QString());
        LE_TELCON_R_STATE->setText(QCoreApplication::translate("MainWindow", "RIGHT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
