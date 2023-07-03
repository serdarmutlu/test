//
// Created by serdar on 6/8/23.
//

#include "include/generic_tools.h"

#include <iostream>
#include <ratio>
#include <unistd.h>
#include <chrono>

unsigned int generic_tools::stopwatch()
{
    static auto start_time = std::chrono::steady_clock::now();

    auto end_time = std::chrono::steady_clock::now();
    auto delta    = std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time);

    start_time = end_time;

    return delta.count();
}

unsigned int generic_tools::stopwatchMilliSeconds()
{
    static auto start_time = std::chrono::steady_clock::now();

    auto end_time = std::chrono::steady_clock::now();
    auto delta    = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    start_time = end_time;

    return delta.count();
}

unsigned long long generic_tools::stopwatchMicroSeconds()
{
    static auto start_time = std::chrono::steady_clock::now();

    auto end_time = std::chrono::steady_clock::now();
    auto delta    = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    start_time = end_time;

    return delta.count();
}

unsigned long long generic_tools::getTotalSystemMemory()
{
    long pages = sysconf(_SC_PHYS_PAGES);
    long page_size = sysconf(_SC_PAGE_SIZE);
    return pages * page_size;
}

std::string generic_tools::thousands_separator(long long k, std::string symbol) {
    int l, c, i;
    std::string fin, s, u, rev;
    bool min = false;
    fin = "";
    c = 0;
    if(k < -999){
        k *= -1;
        min = true;
    }
    s = std::to_string(k);
    if(k > 999){
        l = s.length() - 1;
        for (i = l; i >= 0; i--) {
            fin += s[i];
            c++;
            if(c%3 == 0){
                fin += symbol;
            }
        }
        rev = fin;
        fin = "";
        l = rev.length() - 1;
        for (i = l; i >= 0; i--) {
            fin += rev[i];
        }
        u = fin[0];
        if(u == symbol){
            fin.erase(fin.begin());
        }
        if(min){
            fin.insert(0, "-");
        }
        return fin;
    } else {
        return s;
    }
}