#include <iostream>
using namespace std;

int main() {
    int* p1;
    int** p2 = nullptr;

    int x = 5;
    int y = 10;

    p1 = &x;
    p2 = &p1;
    cout << p1 << "\t" << *p1 << endl;
    cout << p2 << "\t" << *p2 << "\t" << **p2 << endl;

    return 0;
}