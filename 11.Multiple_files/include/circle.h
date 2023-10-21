#pragma once
#include "../include/shape.h"

class Circle: public Shape {
public:
    Circle(float r): radius(r) {}
    float Area() override;
    float Perimeter() override;
protected:
    float radius;
};