#include <iostream>
#include "include/Timer.h"
#include "include/generic_tools.h"

using namespace std;

int main()
{
    unsigned long long totalTime = 0, totalTimeLoop = 0;

    Timer timerTotal, x;



    const long maxNum = 1000000000;
    int dummy = 0;

    timerTotal.start();
    for (int i = 0; i < maxNum; i++) {

    }
    totalTime = timerTotal.end();

    cout << "Total time spent in arrow - Total: " << generic_tools::thousands_separator(totalTime) << std::endl;
    cout << "Total time spent in arrow - Loop:  " << generic_tools::thousands_separator(totalTimeLoop) << std::endl;
    cout << "dummy2:" << dummy << endl;


}
