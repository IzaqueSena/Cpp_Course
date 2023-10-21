#include <iostream>
using namespace std;

int main() {
    // stack
    int x = 5; 
    int v[10];

    // heap
    // new <=> malloc() + constructor
    int *y = new int(5);
    int *w = new int[100];

    cout << *y << endl;
    w[49] = 10;
    cout << w[49] << endl;

    // delete <=> free() + destructor
    delete y;
    delete[] w; 

    return 0;
}