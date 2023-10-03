#include <iostream>
using namespace std;

int main() {
    int value = 98765;
    int &ref = value;
    int *pot = &value;

    // value of pointers
    cout << "value:\t" << value << "\t" << ref << "\t" << *pot << endl;
    cout << "memory address:\t" << &value << "\t" << &ref << "\t" << pot << endl;

    // manipulating pointers
    cout << endl;
    cout << "pot: " << pot << " *pot: " << *pot << endl;
    pot = pot + 1;
    cout << "pot + 1: " << pot << endl; pot = pot - 1;
    *pot = *pot + 1;
    cout << "*pot + 1: " << *pot << endl; *pot = *pot - 1;


    return 0;
}