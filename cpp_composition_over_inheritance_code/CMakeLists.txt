cmake_minimum_required(VERSION 2.8.9)
project(cpp_composition_over_inheritance_code)

set (CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(include ${GTEST_INCLUDE_DIRS})
 

 
#Can manually add the sources using the set command as follows:
#set(SOURCES src/hello.cpp src/helloWorld.cpp src/mainapp.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(tt_prog src/tabletennisplayer_app.cpp src/tabletennisplayer.cpp src/i_strokable.cpp src/forehandstroker.cpp
               src/backhandstroker.cpp src/i_movable.cpp)


 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTableTennisTests tests/test_tabletennisplayer.cpp src/tabletennisplayer.cpp src/i_strokable.cpp
               src/forehandstroker.cpp src/backhandstroker.cpp src/i_movable.cpp)
target_link_libraries(runTableTennisTests ${GTEST_LIBRARIES} pthread)

#add_executable(bowlingGameTest tests/bowlingGameTest.cpp src/bowlingGame.cpp)
#target_link_libraries(bowlingGameTest ${GTEST_LIBRARIES} pthread)

#add_executable(knockoutTest tests/knockoutTest.cpp src/knockout.cpp)
#target_link_libraries(knockoutTest ${GTEST_LIBRARIES} pthread)
