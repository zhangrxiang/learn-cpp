cmake_minimum_required(VERSION 3.0.2)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(cpp-inheritance-main main.cpp)
add_executable(cpp-inheritance inherit.cpp)
add_executable(cpp-inheritances inherits.cpp)
add_executable(cpp-inheritance-method inherit-method.cpp)
add_executable(cpp-inheritance-virtual inherit-virtual.cpp)
add_executable(cpp-inheritance-polymorphism polymorphism.cpp)
