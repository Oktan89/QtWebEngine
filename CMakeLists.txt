cmake_minimum_required(VERSION 3.18.4)

set(CMAKE_CXX_STANDARD 17)

project(QtWeb VERSION 0.1.0)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
message("CMAKE_SOURCE_DIR: [${CMAKE_SOURCE_DIR}]")
add_subdirectory(src)
