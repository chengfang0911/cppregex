cmake_minimum_required(VERSION 3.1)

project(regex)

set (CMAKE_CXX_STANDARD 11)

include_directories(
  src
  ${CMAKE_BINARY_DIR})


  add_executable(regex-splitstring src/splitstring.cpp)