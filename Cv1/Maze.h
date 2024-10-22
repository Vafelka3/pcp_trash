//
// Created by Ivo Pisařovic on 24/09/2020.
//

#ifndef MAZE_H
#define MAZE_H


#include <array>
#include "Worm.h"

class Maze {
private:
    Worm* worm;
    std::array<std::array<char, 5>, 5> plan;
//    _____
//    _____
//    _____
//    _____
//    _____

public:
    Maze();
    void print() const;
    bool checkDirection(const int x, const int y) const;
    void moveWorm(const int x, const int y);

};


#endif //UNTITLED_MAZE_H
