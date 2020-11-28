cmake_minimum_required(VERSION 3.17)
project(cdd LANGUAGES C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-pthread")

find_package(Threads)

add_library(handling_functions STATIC handling_functions.c)
add_executable(cdd main.c handling_functions.h handling_functions.c vars.h)

target_link_libraries(cdd PRIVATE handling_functions Threads::Threads)