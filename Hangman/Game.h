#ifndef PCP_GAME_H
#define PCP_GAME_H
#include "Word.h"

class Game {
private:
    static const int m_celkemPokusu = 6;
    int m_yourPokusy;
    vector<char> m_latters;
    vector<char> m_youeLatters;
    vector<char> m_dashes;

    string m_slovo;

    void dejPismenna();
    void printPokusy();
    void printYourPismena();
    void Input();
    void zpracuj(char pismeno);
    bool controlWin();
    bool controlLose();
    bool pismenoUZBylo(char pismeno);
    static void printPismenna(vector<char>& yourVector);

public:
    Game(string nameFile);
    void start();



};


#endif //PCP_GAME_H
