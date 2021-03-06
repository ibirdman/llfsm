//============================================================================
// Name        : llTimer_shell.h
// Author      : Stefan Gao (stefan.gao@gmail.com)
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================
#include "shell/msgloop.h"

NS_LL_BEGIN

int setTimer(int interval, std::function<void(void*)> func, bool once)
{
    return llshell::setTimer(interval, func, once);
}

bool killTimer(int tid)
{

    return true;
}

void postCallback(std::function<void(void*)> func)
{

}

NS_LL_END
