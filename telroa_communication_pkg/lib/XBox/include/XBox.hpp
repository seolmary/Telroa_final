//
// Created by camel-ljm on 24. 10. 22.
//

#ifndef XBOX_HPP
#define XBOX_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/joystick.h>

class XBox
{
public:
    static XBox* getInstance()
    {
        static XBox instance;
        return &instance;
    };
    XBox(const XBox&) = delete;
    XBox& operator=(const XBox&) = delete;
private:
    XBox();
    ~XBox();
    bool Open();
    double setDeadBend(double joystick);
    void Transfer();

    int joy_fd, num_of_axis, num_of_buttons;
    bool joy_open;
    int joy_type;
    int mDeadBand;

    std::vector<char> joy_button;
    std::vector<int> joy_axis;
public:
    void Close();
    void Read();
    char name_of_joystick[80];
    bool mJoystickButton[11];
    int mJoystickAxis[8];

private:
    enum JOYSTICK_TYPE
    {
        UNDEFINED = 0,
        XBOXCONTROLLER,
        DUALSENSE,
        DUALSENSE_WIRE,
        STEAMDECK
    };
};

#endif //XBOX_HPP
