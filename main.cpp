//============================================================================
// Name        : mainentry.cpp
// Author      : Stefan Gao (stefan.gao@gmail.com)
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include "test/test1.h"
#include "test/test2.h"
#include "platform/shell/msgloop.h"

int main(int argc, const char * argv[])
{
    /*
    auto* testCase = TestCase2::create();
    if (testCase)
    {

    }*/

    llshell::main();

    return 0;
}
