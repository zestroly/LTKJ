//
// Created by lenovo on 2022/9/30.
//

#ifndef LTKJ_UNITLS_H
#define LTKJ_UNITLS_H
#include <chrono>
#include <iostream>
#include <thread>
#include <stdint.h>
#include <stdio.h>

namespace LTKJ
{
    void sleep(uint32_t seconds)
    {
        std::this_thread::sleep_for(std::chrono::seconds(seconds));
    }

    void msleep(uint32_t milliseconds)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
    }


    void usleep(uint32_t microseconds)
    {
        std::this_thread::sleep_for(std::chrono::microseconds(microseconds));
    }
}






#endif //LTKJ_UNITLS_H
