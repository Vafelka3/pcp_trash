#ifndef PCP_GAME_H
#define PCP_GAME_H
#include "Road.h"

class Game {
private:

    Road* myRoad;

    void move(char input);
    static void printControl();
    static void printLose();
    static void printEnd();
    void tryMoveAuto(int positionX, int positionY);

public:
    Game();
    void start();

};


#endif //PCP_GAME_H
