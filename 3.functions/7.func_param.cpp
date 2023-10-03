#include <iostream>
using namespace std;

// typedef int (*binaryOperation)(int, int);
using binaryOperation = int(*)(int, int);

int exec(binaryOperation func, int a, int b) {
    return func(a, b);
}

int add(int a, int b) { 
    return a + b;
} 

int subtract(int a, int b) {
    return a - b;
}

int main() {
    cout << exec(add, 2, 3) << endl;
    cout << exec(subtract, 2, 3) << endl; 
    return 0;
}