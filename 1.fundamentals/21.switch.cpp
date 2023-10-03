#include <iostream>
using namespace std;

int main() {
    int n = 3;

    switch(n) {
        case 1:
            cout << "1" << endl;
            break;
        case 5:
            cout << "5" << endl;
            break;
        case 10:
            cout << "10" << endl;
            break;
        default:
            cout << "-1" << endl;
    }

    return 0;
}