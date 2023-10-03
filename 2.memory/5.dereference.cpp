#include <iostream>
using namespace std;

int main() {
    double pi = 3.24;
    double& piRef = pi;
    cout << pi << "\t" << &pi << endl;
    // * -> dereference operator
    // Think of as "Get value of <memory address>"
    cout << *&pi << endl;
    cout << &*&*&*&piRef << endl;

    return 0;
}