cmake_minimum_required(VERSION 3.26)
project(pcp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cv1 Cv1/main.cpp
        Cv1/Game.h
        Cv1/Game.cpp
        Cv1/Maze.h
        Cv1/Maze.cpp
        Cv1/Worm.h
        Cv1/Worm.cpp
)
add_executable(Array Array/main.cpp)

add_executable(Text Text/main.cpp)

add_executable(TextVector Text/main1.cpp)

add_executable(Hangman Hangman/main.cpp
        Hangman/Game.h
        Hangman/Game.cpp
        Hangman/Word.h
        Hangman/Word.cpp
)

add_executable(Tesla Tesla/main.cpp
        Tesla/Auto.h
        Tesla/Auto.cpp
        Tesla/Nabij.h
        Tesla/Nabij.cpp
        Tesla/Road.h
        Tesla/Road.cpp
        Tesla/Game.h
        Tesla/Game.cpp
)
