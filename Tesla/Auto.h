#ifndef PCP_AUTO_H
#define PCP_AUTO_H
#include <iostream>
#include <string>

using namespace std;

class Auto {
private:
    int m_positionX;
    int m_positionY;
    float m_batarie;
    char const m_symbol = 'T';
public:
    Auto(int positionX, int positionY);
    int getPositionX();
    int getPositionY();
    void setPosition(int positionX, int positionY);

    char getSymbolAuta();
    float getBatarie();
    void setBatarie(float uroven);
    void minusBatarie(float uroven);

};


#endif //PCP_AUTO_H
