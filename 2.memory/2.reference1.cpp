#include <iostream>
using namespace std;

int main() {
    int a = 10; // int: 4 bytes = 32 bits
    cout << a << "\t" << &a << endl;

    string name = "Paul";
    cout << name << "\t" << &name << endl;

    return 0;
}