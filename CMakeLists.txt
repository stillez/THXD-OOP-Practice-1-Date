cmake_minimum_required(VERSION 3.4)
project(OOP_Exam_Date)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp date.cpp)
add_executable(OOP_Exam_Date ${SOURCE_FILES})