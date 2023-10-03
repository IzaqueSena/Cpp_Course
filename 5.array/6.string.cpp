#include <iostream>
using namespace std;

int main() {
    string abc = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < size(abc); i++) {
        if (abc[i] == 'f' ) {
            abc[i] = '?';
        }
        cout << abc[i];
    }
    cout << endl;

    cout << abc.substr(0, 10) << endl;

    abc = abc.substr(0, 2).append("000");

    cout << abc << endl;

    return 0;
}