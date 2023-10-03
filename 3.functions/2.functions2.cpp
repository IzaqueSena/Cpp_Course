#include <iostream>
using namespace std;

void log(int number, bool newLine=true);

int main() {
    //default
    log(3);
    log(4);

    log(3, false);
    log(4, false);

    return 0;
}

void log(int number, bool newLine) {
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}