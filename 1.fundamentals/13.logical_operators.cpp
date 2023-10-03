#include <iostream>
using namespace std;

int main() {
    
    cout << (9 >= 3 && 8 <= 21) << endl;
    cout << (9 >= 2 && 10 < 9) << endl;
    cout << (9 >= 2 || 10 < 9) << endl;
    cout << (9 >= 21 || 10 < 9) << endl;

    return 0;
}