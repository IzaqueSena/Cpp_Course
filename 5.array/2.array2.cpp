#include <iostream>
using namespace std;

int main() {
    string names[] = {"Hanna", "Peter", "Ana", "Drake", "Pet"};
    names[2] = "Mary";

    for (int i = 0; i < size(names); i++) {
        cout << names[i] << endl;
    }

    return 0;
}