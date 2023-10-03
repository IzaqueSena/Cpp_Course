#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            continue; // Skip iteration when i equals 3
        }
        cout << "i: " << i << endl;
    }
    return 0;
}