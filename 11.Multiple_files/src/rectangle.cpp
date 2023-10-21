#include "../include/rectangle.h"

float Rectangle::Area() {
    return width * height;
}

float Rectangle::Perimeter() {
    return 2 * (height + width);
}