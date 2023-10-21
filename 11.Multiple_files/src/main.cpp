#include <iostream>
#include "../include/circle.h"
#include "../include/rectangle.h"
#include "../include/shape.h"
#include "../include/square.h"

using namespace std;

int main() {
    Circle c(12);
    Rectangle r(3, 5);
    Square s(7);

    cout << "Circle: " << "area: " << c.Area() << " perm: " << c.Perimeter() << endl;
    cout << "Requtangle: " << "area: " << r.Area() << " perm: " << r.Perimeter() << endl;
    cout << "Square: " << "area: " << s.Area() << " perm: " << s.Perimeter() << endl;

    return 0;
}