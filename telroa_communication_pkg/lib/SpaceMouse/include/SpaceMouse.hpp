//
// Created by camel-ljm on 24. 7. 29.
//

#ifndef SPACEMOUSE_H
#define SPACEMOUSE_H

#include "../../../include/ControllerInfo.hpp"
#include <iostream>
#include <vector>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/joystick.h>

typedef struct _CONNEXION_
{
    int X;
    int Y;
    int Z;
    int Roll;
    int Pitch;
    int Yaw;
    int LeftButton;
    int RightButton;
} CONNEXION, *pCONNEXION;

class SpaceMouse
{
public:
    SpaceMouse();
    ~SpaceMouse();
    void connRead();

    CONNEXION mouse;

private:
    js_event js;

    char mJoyName[80];

    int mJoyFd;
    int mAxisNum;
    int mButtonNum;
    int mDeadBand;

    std::vector<char> joy_button;
    std::vector<int> joy_axis;
};

#endif //SPACEMOUSE_H
