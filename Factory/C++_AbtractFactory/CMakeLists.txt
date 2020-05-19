cmake_minimum_required(VERSION 2.8.9)
project(AbtractFactoryPattern)

include_directories(hdr)

#set(SOURCES src/mainapp.cpp src/Student.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})