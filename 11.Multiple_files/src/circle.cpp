#include "../include/circle.h"
using namespace std;

float Circle::Area() {
    return 3.14f * radius * radius;
};

float Circle::Perimeter() {
    return 2 * 3.14f * radius;
}