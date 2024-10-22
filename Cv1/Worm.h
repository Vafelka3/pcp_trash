//
// Created by Ivo Pisařovic on 24/09/2020.
//

#ifndef WORM_H
#define WORM_H


class Worm {
private:
    int x;
    int y;
public:
    Worm(const int x, const int y);
    static const char symbol = '@';
    int getX() const;
    int getY() const;
    void moveTo(const int x, const int y);
};


#endif //UNTITLED_WORM_H
