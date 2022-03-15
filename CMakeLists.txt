cmake_minimum_required(VERSION 3.21)
project(Lab4_OOP_example)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE day1_files day1/**.h day1/**.cpp)

file(GLOB_RECURSE day2_files day2/**.h day2/**.cpp)

file(GLOB_RECURSE day3_files day3/**.h day3/**.cpp)


add_executable(Lab4_OOP_example_day1 ${day1_files})
add_executable(Lab4_OOP_example_day2 ${day2_files})
add_executable(Lab4_OOP_example_day3 ${day3_files})
