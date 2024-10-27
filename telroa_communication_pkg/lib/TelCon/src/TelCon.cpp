//
// Created by camel-ljm on 24. 8. 5.
//

#include "TelCon.hpp"

TelCon::TelCon()
{
    if(!isIMUReady)
    {
        IMUAngle[0] = 0;
        IMUAngle[1] = 0;
        IMUAngle[2] = 0;

        IMUVel[0] = 0;
        IMUVel[1] = 0;
        IMUVel[2] = 0;

        IMUPos[0] = 0;
        IMUPos[1] = 0;
        IMUPos[2] = 0;

        IMUId = 0;

        isIMUReady = initIMU();
    }

    if(!isConnReady)
    {
        conPw = false;
        conBt1 = false;
        conBt2 = false;
        conEStop = false;

        isConnReady = initConn();
    }
}

void TelCon::startThread()
{
    pthread_t Conn_Thread;
    generate_nrt_thread(Conn_Thread, NRT_Controller_Data, "Conn_Thread", 0, NULL);
}


void TelCon::readIMUData()
{
    mIMUData.clear();
    mIMUToken.clear();
    mIMUTokens.clear();
    mIMUStreamData.clear();

    if(!isIMUReady)
    {
        return;
    }

    char buffer[128];
    ssize_t bytes_read = read(mIMUSerialFd, buffer, sizeof(buffer));

    if (bytes_read > 1)
    {
        buffer[bytes_read] = '\0';
        mIMUData = buffer;
        mIMUStreamData.str(mIMUData);
        mIMUStreamData.ignore(256, '-');
        while (std::getline(mIMUStreamData, mIMUToken, ','))
        {
            mIMUTokens.push_back(mIMUToken);
        }

        if (mIMUTokens.size() == 11)
        {
            IMUId = std::stoi(mIMUTokens[0]);
            for (int idx = 1; idx < 4; idx++)
            {
                IMUAngle[idx - 1] = std::stod(mIMUTokens[idx]);
                IMUVel[idx - 1] = std::stod(mIMUTokens[idx + 3]);
                IMUPos[idx - 1] = std::stod(mIMUTokens[idx + 6]);
            }
            // std::cout << "\033c";
            // std::cout << IMUId << '\t' << IMUAngle[0] << '\t' << IMUAngle[1] << '\t' << IMUAngle[2]
            //     << '\t' << IMUVel[0] << '\t' << IMUVel[1] << '\t' << IMUVel[2]
            //     << '\t' << IMUPos[0] << '\t' << IMUPos[1] << '\t' << IMUPos[2] << std::endl;
        }
    }
}

void TelCon::readConnData()
{
    struct sockaddr_in clientAddr;
    memset(&clientAddr, 0, sizeof(clientAddr));
    socklen_t addrLen = sizeof(clientAddr);

    int bt[4];
    unsigned char msg[5];

    if(recvfrom(mSocket, msg, sizeof(msg), MSG_CONFIRM, (sockaddr*)&clientAddr, &addrLen) < 0)
    {
        conPw = false;
        std::cout << "[TELCON] Power OFF\n";
        return;
    }

    // std::cout << msg[0] << std::endl;

    if (msg[0] != mPrevConBt1 || msg[1] != mPrevConBt2 || msg[2] != mPrevConEStop)
    {
        for (int i = 0; i < 4; i++)
        {
            bt[i] = msg[i];

            switch (bt[i])
            {
            case 48:
                switch (i)
                {
                case 0:
                    conPw = false;
                    std::cout << "[TELCON] Power OFF\n";
                    break;
                case 1:
                    conBt1 = false;
                    std::cout << "[TELCON] Bt1 OFF\n";
                    break;
                case 2:
                    conBt2 = false;
                    std::cout << "[TELCON] Bt2 OFF\n";
                    break;
                case 3:
                    conEStop = false;
                    std::cout << "[TELCON] E-Stop OFF\n";
                    break;
                default:
                    break;
                }
                break;
            case 49:
                switch (i)
                {
                case 0:
                    conPw = true;
                    std::cout << "[TELCON] Power ON\n";
                    break;
                case 1:
                    conBt1 = true;
                    std::cout << "[TELCON] Bt1 ON\n";
                    break;
                case 2:
                    conBt2 = true;
                    std::cout << "[TELCON] Bt2 ON\n";
                    break;
                case 3:
                    conEStop = true;
                    std::cout << "[TELCON] E-Stop ON\n";
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
        }

        mPrevConPw = bt[0];
        mPrevConBt1 = bt[1];
        mPrevConBt2 = bt[2];
        mPrevConEStop = bt[3];

        std::cout << std::endl;
    }
}

bool TelCon::initConn()
{
    struct sockaddr_in serverAddr;

    while ((mSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
    {
        std::cerr << "[TELCON] Socket failed\n";
    }
    std::cout << "[TELCON] Socket on\n";

    struct timeval optVal = {3, 0};
    int optLen = sizeof(optVal);
    setsockopt(mSocket, SOL_SOCKET, SO_RCVTIMEO, &optVal, optLen);

    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(60000);

    while (bind(mSocket, (const struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0)
    {
        std::cerr << "[TELCON] Bind failed\n";
    }
    std::cout << "[TELCON] Bind on" << std::endl;

    poll_events.fd = mSocket;
    poll_events.events = POLLIN | POLLERR;
    poll_events.revents = 0;

    return true;
}

bool TelCon::initIMU()
{
    tty.c_cflag &= ~PARENB; // No parity
    tty.c_cflag &= ~CSTOPB; // 1 stop bit
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8; // 8 data bits
    tty.c_cflag &= ~CRTSCTS; // No hardware flow control
    tty.c_cflag |= CREAD | CLOCAL; // Enable receiver, ignore modem control lines
    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Disable software flow control
    tty.c_iflag &= ~(ICANON | ECHO | ECHOE | ISIG); // Non-canonical mode
    tty.c_oflag &= ~OPOST; // Raw output

    tty.c_cc[VTIME] = 0;
    tty.c_cc[VMIN] = 0;

    tty.c_cflag &= ~CBAUD;
    tty.c_cflag |= CBAUDEX;

    tty.c_ispeed = 921600;
    tty.c_ospeed = 921600;

    mIMUSerialFd = open(mSerialPort, O_RDONLY | O_NONBLOCK);

    if (mIMUSerialFd < 0)
    {
        printf("[TELCON] Error %i from open: %s\n", errno, strerror(errno));
        return false;
    }

    while (ioctl(mIMUSerialFd, TCGETS2, &tty) < 0)
    {
        printf("[TELCON] Error %i from open: %s\n", errno, strerror(errno));
    }

    while (ioctl(mIMUSerialFd, TCSETS2, &tty) < 0)
    {
        printf("[TELCON] Error %i from open: %s\n", errno, strerror(errno));
    }

    std::cout << "[TELCON] IMU Initialized\n";

    return true;
}

void* NRT_Controller_Data(void* arg)
{
    TelCon* telCon = TelCon::getInstance();

    struct timespec TIME_NEXT;
    struct timespec TIME_NOW;

    while (telCon->isConnReady)
    {
        clock_gettime(CLOCK_REALTIME, &TIME_NEXT);
        telCon->readConnData();
        clock_gettime(CLOCK_REALTIME, &TIME_NOW);
        usleep(100);
    }
}
