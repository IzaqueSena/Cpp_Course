#define ZERO 0
#define SQUARE(X) X * X
#include <iostream>
using namespace std;


int main() {
    #ifdef SQUARE 
        cout << SQUARE(10) << endl;
        cout << SQUARE(1) << endl;
    #else
        cout << "SQUARE is not defined" << endl;
    #endif

    #if DEBUG == 1
        cout << "está no modo DEBUG" << endl;
    #endif
    
    return 0;
}