//
// Created by Ivo Pisařovic on 24/09/2020.
//

#include "Worm.h"

Worm::Worm(const int x, const int y) {
    this-> x= x;
    this->y = y;
}

int Worm::getX() const {
    return x;
}

int Worm::getY() const {
    return y;
}

void Worm::moveTo(const int x, const int y) {
    this->x = x;
    this->y = y;
}
