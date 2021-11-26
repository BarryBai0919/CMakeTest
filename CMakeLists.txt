cmake_minimum_required(VERSION 3.10)
# set the project name and version
project(Test1 VERSION 2021.1124)
message(STATUS "Set project done")

# set the CPP  STANDARD
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message(STATUS "Set C++ standard done")

#add sub build
add_subdirectory(element)
add_subdirectory(point)
add_subdirectory(main)
message(STATUS "Add subdirectories done")