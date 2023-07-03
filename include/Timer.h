
#include <chrono>
#include <ratio>

class Timer {
private:    
    std::chrono::high_resolution_clock::time_point start_time, end_time;
    
public:
    void start();
    unsigned long end();
};