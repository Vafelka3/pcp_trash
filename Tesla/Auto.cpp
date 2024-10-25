#include "Auto.h"

Auto::Auto(int positionX, int positionY) {
    m_positionX = positionX;
    m_positionY = positionY;
    m_batarie = 30.0;
}

int Auto::getPositionX() {
    return m_positionX;
}

int Auto::getPositionY() {
    return m_positionY;
}

char Auto::getSymbolAuta() {
    return m_symbol;
}

void Auto::setPosition(int positionX, int positionY) {
    m_positionX = positionX;
    m_positionY = positionY;
}

float Auto::getBatarie() {
    return m_batarie;
}

void Auto::setBatarie(float uroven) {
    if (uroven + getBatarie() > 100){
        m_batarie = 100;
    } else{
        m_batarie += uroven;
    }

}

void Auto::minusBatarie(float uroven) {
    m_batarie -= uroven;
}
