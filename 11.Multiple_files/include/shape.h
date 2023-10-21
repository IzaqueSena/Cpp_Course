#pragma once

#include "../include/shape.h"

class Shape {
public: 
    virtual float Area() =  0;
    virtual float Perimeter() = 0;
};