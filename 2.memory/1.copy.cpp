#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a; // assignment by copy

    a++;
    b--;

    cout << a << " " << b << endl;

    return 0; 
}