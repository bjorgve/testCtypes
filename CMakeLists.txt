cmake_minimum_required(VERSION 2.8.11)

project(test)


if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU|Clang)")
    set(CMAKE_CXX_FLAGS "-std=c++14")
endif()

add_library(test SHARED HelloWorld.cpp)

#add_executable(lol HelloWorld.cpp)
