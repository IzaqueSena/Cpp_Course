#include <iostream>
using namespace std;

int main() {
    // insertion operator <<
    cout << "Hi\n";
    cout << 3.14 << endl;
    int x = 3;
    cout << x << endl;

    cout << "Enter your name: ";

    string name;
    // extraction operator >>
    cin >> name;

    // insertion operator <<
    cout << name << endl;

    return 0;
}