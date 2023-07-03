// Update on 7/3/23

#include "include/Timer.h"
#include <chrono>


void Timer::start() {
    start_time = std::chrono::high_resolution_clock::now();
}

unsigned long Timer::end() {
    end_time = std::chrono::high_resolution_clock::now();
    auto delta = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    return delta.count();
}