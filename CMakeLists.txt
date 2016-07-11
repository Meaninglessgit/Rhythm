cmake_minimum_required(VERSION 3.5)
project(Rhythm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    RhythmGame/RhythmGame/RhythmGame.vcxproj
    RhythmGame/RhythmGame/RhythmGame.vcxproj.filters
    RhythmGame/RhythmGame.sdf
    RhythmGame/RhythmGame.sln
    RhythmGame/RhythmGame.v11.suo
    newfile.cpp)

add_executable(Rhythm ${SOURCE_FILES})