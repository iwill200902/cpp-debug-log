cmake_minimum_required(VERSION 3.10)
project(cpp-debug-log)

add_library(debug_log INTERFACE)
target_include_directories(debug_log INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
