#pragma once
#include "../include/rectangle.h"


class Square : public Rectangle {
public:
    Square(float sideLen) : Rectangle(sideLen, sideLen) {}
    float Diagonal();
};
