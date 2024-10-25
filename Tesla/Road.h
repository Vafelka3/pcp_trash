#ifndef PCP_ROAD_H
#define PCP_ROAD_H

#include <iostream>
#include <array>
#include <string>

#include "Auto.h"
#include "Nabij.h"
using namespace std;

class Road {
private:
    Auto* myAuto;
    Nabij* nabij1;
    Nabij* nabij2;
    array<std::array<char, 5>, 5> m_roud;
    char const m_symbol = '-';
public:
    Road();
//    array<array<char, 5>, 5> getRoad() const;
    void printRoad();
    void moveAuto(int positionX, int positionY);
    bool checkBatarie();
    void nabijBatarie();
    void printBaterka();
    bool checkBorder(int positionX, int positionY);

    void controlaNabijeni(){

    }




};


#endif //PCP_ROAD_H
