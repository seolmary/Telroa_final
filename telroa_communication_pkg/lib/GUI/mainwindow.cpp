//
// Created by camel-ljm on 24. 9. 13.
//

#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isFullScreenMode(false)
{
    ui->setupUi(this);
    GuiInitialize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GuiInitialize()
{
    connect(ui->BT_QUIT, &QPushButton::clicked, [this]()
    { qApp->quit(); });
    connect(ui->BT_SCALE_UP, &QPushButton::clicked, this, &MainWindow::scaleScreen);
    connect(ui->BT_MINIMIZE, &QPushButton::clicked, [this]()
    { this->showMinimized(); });

    // buttonTimer = new QTimer();
    // connect(buttonTimer, SIGNAL(timeout()), this, SLOT(ButtonTimeout()));
    // buttonTimer->start(1000);
    // displayTimer = new QTimer();
    // connect(displayTimer, SIGNAL(timeout()), this, SLOT(DisplayUpdate()));
    // displayTimer->start(20);

    // ui->LE_ROBOT_STATE->setText("DISCONNECTED");
    // ui->LE_CONNECT_1->setStyleSheet("background-color:red");
    // ui->LE_CONNECT_2->setStyleSheet("background-color:red");
    // ui->BT_MOTOR_CONTROL_START->setDisabled(true);
    // ui->BT_ROBOT_START->setDisabled(true);
    // ui->BT_CHECK_MOTOR->setDisabled(true);
    // ui->BT_SET_JOINT_OFFSET->setDisabled(true);
    // ui->BT_STAND_UP->setDisabled(true);
    // ui->BT_E_STOP->setDisabled(true);
    // ui->BT_SIT_DOWN->setDisabled(true);
    // ui->BT_TROT_SLOW->setDisabled(true);
    // ui->BT_TROT_FAST->setDisabled(true);
    // ui->BT_TROT_OVERLAP->setDisabled(true);
    // ui->BT_TROT_STOP->setDisabled(true);
    // ui->BT_ROBOT_START->setDisabled(true);
    // ui->BT_ROBOT_RECOVERY->setDisabled(true);
    // ui->BT_RESTART_CONTROL->setDisabled(true);
    //
    // ui->BT_HARNESS_MODE_ON->setDisabled(true);
    // ui->BT_HARNESS_MODE_OFF->setDisabled(true);
    // ui->BT_HARNESS_CALIBRATION->setDisabled(true);
    // ui->BT_HARNESS_LOGGER->setDisabled(true);
    //
    // ui->LE_RESTART_CONTROL->setStyleSheet("background-color:pink");
    // ui->LE_ROBOT_RECOVERY->setStyleSheet("background-color:pink");
    // ui->LE_TROT_OVERLAP->setStyleSheet("background-color:pink");
    // ui->LE_TROT_SLOW->setStyleSheet("background-color:pink");
    // ui->LE_TROT_FAST->setStyleSheet("background-color:pink");
    // ui->LE_TROT_STOP->setStyleSheet("background-color:pink");
    // ui->LE_CHECK_MOTOR->setStyleSheet("background-color:pink");
    // ui->LE_SET_JOINT_OFFSET->setStyleSheet("background-color:pink");
    // ui->LE_MOTOR_CONTROL_START->setStyleSheet("background-color:pink");
    // ui->GB_GRAPH_OPTION->hide();
    //
    // ui->LE_HARNESS_MODE->setStyleSheet("background-color:red");
    // ui->LE_HARNESS_MODE_1->setStyleSheet("background-color:red");
    // ui->LE_HARNESS_MODE_ON->setStyleSheet("background-color:pink");
    // ui->LE_HARNESS_MODE_OFF->setStyleSheet("background-color:lightgreen");
    // ui->LE_HARNESS_CALIBRATION->setStyleSheet("background-color:pink");
    // ui->LE_HARNESS_LOGGER->setStyleSheet("background-color:pink");
}

void MainWindow::scaleScreen()
{
    if (isFullScreenMode)
    {
        isFullScreenMode = false;
        this->showNormal();
    }
    else
    {
        isFullScreenMode = true;
        this->showFullScreen();
    }
}

void MainWindow::ButtonTimeout()
{
    if(isButtonClicked){
        isButtonClicked = false;
    }
}