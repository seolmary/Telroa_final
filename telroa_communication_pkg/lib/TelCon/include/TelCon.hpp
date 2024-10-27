//
// Created by camel-ljm on 24. 8. 5.
//

#ifndef TELCON_HPP
#define TELCON_HPP

#include <iostream>
#include <cstdio>
#include <memory.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/poll.h>
#include <chrono>
#include <asm/termbits.h>
#include <vector>
#include <iomanip>

#include "ThreadGenerator.hpp"

class TelCon
{
public:
    static TelCon* getInstance()
    {
        static TelCon instance;
        return &instance;
    }
    void startThread();
    void readIMUData();
    void readConnData();

    bool isIMUReady;
    bool isConnReady;

    double IMUAngle[3];
    double IMUVel[3];
    double IMUPos[3];

    bool conPw;
    bool conBt1;
    bool conBt2;
    bool conEStop;

    int IMUId;

private:
    TelCon();

    bool initIMU();
    bool initConn();

    const char* mSerialPort = "/dev/ttyUSB0";
    struct termios2 tty = { 0 };

    int mIMUSerialFd;
    std::string mIMUData;
    std::string mIMUToken;
    std::vector<std::string> mIMUTokens;
    std::stringstream mIMUStreamData;
    int mIMUId;

    unsigned char mPrevConPw = 0x48;
    unsigned char mPrevConBt1 = 0x48;
    unsigned char mPrevConBt2 = 0x48;
    unsigned char mPrevConEStop = 0x48;
    int mSocket;
    pollfd poll_events;
};

void* NRT_Controller_Data(void* arg);

enum TELCON_STATE
{
    TELCON_NO_ACT,
    TELCON_E_STOP,
    TELCON_ERROR
};

#endif //TELCON_HPP
