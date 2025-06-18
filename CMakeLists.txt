cmake_minimum_required(VERSION 3.10)
project(DebugLogProject)

add_library(debug_log INTERFACE)

target_include_directories(debug_log INTERFACE debug_log)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE debug_log)
