cmake_minimum_required(VERSION 3.2)

project(learn-cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(learn-cpp ${SOURCE_FILES})
target_link_libraries(learn-cpp pthread)

add_subdirectory(basic)
add_subdirectory(class)
add_subdirectory(cmake)
add_subdirectory(primer)
add_subdirectory(linux)
add_subdirectory(template)