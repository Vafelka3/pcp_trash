#ifndef PCP_NABIJ_H
#define PCP_NABIJ_H
#include <iostream>
#include <string>

using namespace std;

class Nabij {
private:
    int m_positionX;
    int m_positionY;
    char const m_symbol = '+';
public:
    Nabij(int positionX, int positionY);
    int getPositionX();
    int getPositionY();

    char getSymbolNabij();
};


#endif //PCP_NABIJ_H
