cmake_minimum_required(VERSION 2.8.9)
project(cpp_code)
 
#Bring the headers, such as hello.h into the project
include_directories(include)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES src/hello.cpp src/helloWorld.cpp src/mainapp.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(prog src/mainapp.cpp src/hello.cpp)
add_executable(helloWorld src/helloWorld.cpp)
