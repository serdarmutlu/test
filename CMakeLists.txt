cmake_minimum_required(VERSION 3.22)
project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Werror -Wall -Wextra")

include_directories(.)

add_executable(test main.cpp include/Timer.h Timer.cpp include/generic_tools.h generic_tools.cpp)

TARGET_LINK_LIBRARIES(test)
