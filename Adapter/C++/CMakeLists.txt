cmake_minimum_required(VERSION 2.8.9)
project(Adapter)

include_directories(hdr)

file(GLOB SOURCES "src/*.cpp")

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})