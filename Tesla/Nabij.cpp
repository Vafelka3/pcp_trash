#include "Nabij.h"

Nabij::Nabij(int positionX, int positionY) {
    m_positionX = positionX;
    m_positionY = positionY;
}

int Nabij::getPositionX() {
    return m_positionX;
}

int Nabij::getPositionY() {
    return m_positionY;
}

char Nabij::getSymbolNabij() {
    return m_symbol;
}