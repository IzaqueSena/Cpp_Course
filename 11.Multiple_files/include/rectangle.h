#pragma once
#include "../include/shape.h"


class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    float Area() override;
    float Perimeter() override;
protected:
    float width, height;
};