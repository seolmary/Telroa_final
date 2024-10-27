//
// Created by camel-ljm on 24. 7. 29.
//

#include "SpaceMouse.hpp"

#ifndef XBOX

SpaceMouse::SpaceMouse()
{
    if ((mJoyFd = open(JOY_DEV,O_RDONLY)) < 0)
    {
        std::cout << "Failed to open " << JOY_DEV << std::endl;
    }
    else
    {
        ioctl(mJoyFd, JSIOCGAXES, &mAxisNum);
        ioctl(mJoyFd, JSIOCGBUTTONS, &mButtonNum);
        ioctl(mJoyFd, JSIOCGNAME(80), &mJoyName);

        joy_button.resize(mButtonNum, 0);
        joy_axis.resize(mAxisNum, 0);

        std::cout << "Gamepad: " << mJoyName << std::endl;
        std::cout << "axis: " << mAxisNum << std::endl;
        std::cout << "buttons: " << mButtonNum << std::endl;

        fcntl(mJoyFd, F_SETFL, O_NONBLOCK);
    }
}

SpaceMouse::~SpaceMouse()
{
    close(mJoyFd);
}

void SpaceMouse::connRead()
{
    read(mJoyFd, &js, sizeof(js_event));
    switch (js.type & ~JS_EVENT_INIT)
    {
    case JS_EVENT_AXIS:
        if (((int)js.value > mDeadBand) || ((int)js.value < -mDeadBand))
        {
            int sign;
            if ((int)js.value > 0)
            {
                sign = 1;
            }
            else
            {
                sign = -1;
            }
            joy_axis[(int)js.number] = js.value - sign * mDeadBand;
        }
        else
        {
            joy_axis[(int)js.number] = 0;
        }
        break;
    case JS_EVENT_BUTTON:
        joy_button[(int)js.number] = js.value;
        break;
    }

    mouse.LeftButton = joy_button[0];
    mouse.RightButton = joy_button[1];

    mouse.X = joy_axis[0];
    mouse.Y = joy_axis[1];
    mouse.Z = joy_axis[2];
    mouse.Roll = joy_axis[3];
    mouse.Pitch = joy_axis[4];
    mouse.Yaw = joy_axis[5];

    std::cout << "\033c";
    std::cout << "Left : " << mouse.LeftButton << "\t\tRight : " << mouse.RightButton << std::endl;
    std::cout << "X : " << mouse.X << "\t\t\tY : " << mouse.Y << "\t\t\tZ : " << mouse.Z << std::endl;
    std::cout << "Roll : " << mouse.Roll << "\t\tPitch : " << mouse.Pitch << "\t\tYaw : " << mouse.Yaw << std::endl;


    usleep(100);
}

#endif