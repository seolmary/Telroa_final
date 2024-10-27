//
// Created by camel-ljm on 24. 9. 13.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void ButtonTimeout();

private:
    void GuiInitialize();
    void scaleScreen();

protected:

private:
    Ui::MainWindow* ui;
    QTimer* displayTimer;
    QTimer* buttonTimer;

    bool isFullScreenMode;
    double graphOffset;

    bool isButtonClicked = false;
};

#endif //MAINWINDOW_HPP
