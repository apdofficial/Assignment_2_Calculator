cmake_minimum_required(VERSION 3.12)
project(Assignment_2_Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment_2_Calculator main.cpp Calculator.cpp Calculator.h)

add_subdirectory(./lib/googletest)

add_executable(test ./test/main_test.cpp test/Calculator_test.cpp)

target_include_directories(test PUBLIC ./lib/googletest/include)

target_link_libraries(test gtest gtest_main)
