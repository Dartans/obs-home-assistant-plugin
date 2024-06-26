cmake_minimum_required(VERSION 3.10)
project(obs-web-monitor-plugin)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(obs-web-monitor-plugin SHARED
    src/main.cpp
    src/plugin.cpp
    src/webpage
