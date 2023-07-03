//
// Created by serdar on 6/8/23.
//

#ifndef PG_ARROW_GENERIC_TOOLS_H
#define PG_ARROW_GENERIC_TOOLS_H

#include <string>

class generic_tools {
public:
    static unsigned int stopwatch();
    static unsigned int stopwatchMilliSeconds();
    static unsigned long long stopwatchMicroSeconds();
    static unsigned long long getTotalSystemMemory();
    static std::string thousands_separator(long long k, std::string symbol=",");
};

#endif //PG_ARROW_GENERIC_TOOLS_H
