cmake_minimum_required(VERSION 3.16)

project(statslib VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(pybind11 REQUIRED)

pybind11_add_module(gstats
    src/average.cpp
    src/median.cpp
    src/bindings.cpp
    src/mode.cpp
    src/quartile.cpp
)

target_include_directories(gstats PRIVATE include)

install(TARGETS gstats LIBRARY DESTINATION .)
