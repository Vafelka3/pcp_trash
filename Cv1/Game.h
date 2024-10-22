//
// Created by Ivo Pisařovic on 01/10/2020.
//

#ifndef GAME_H
#define GAME_H


#include "Maze.h"

class Game {
private:
    Maze* maze;
    void printIntroduction() const;
    void printOptions() const;
    char waitForInput() const;
    void printEnd() const;
    void processInput(char input);
    void tryMovingWorm(const int x, const int y);

public:
    void start();
    Game();
};


#endif //UNTITLED_GAME_H
