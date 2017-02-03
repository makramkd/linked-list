cmake_minimum_required(VERSION 3.6)
project(linked_list)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    include/linked_list.h
    include/main.h
    include/util.h
    src/linked_list.c
    src/main.c)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(linked_list ${SOURCE_FILES})