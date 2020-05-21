cmake_minimum_required(VERSION 3.17.2)

project(main_module)

include_directories(/Users/ashwinkalbag/gitworld/main_module/internal/sub_module_1/include)
include_directories(/Users/ashwinkalbag/gitworld/main_module/internal/sub_module_2/include)

add_definitions(-std=c++14)

add_executable(main main.cpp)
