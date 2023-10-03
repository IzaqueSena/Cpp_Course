#include <iostream>
using namespace std;

int main() {
    string names1[] = {"Hanna", "Peter", "Ana", "Drake", "Pet"};
    string names2[] = {"Hanna", "Peter", "Ana", "Drake", "Pet"};

    // passing by POINTER
    for (int i = 0; i < size(names1); i++) {
        cout << names1[i].append("!!") << " ";
    }
    cout << endl;
    for (int i = 0; i < size(names1); i++) {
        cout << names1[i] << " ";
    }
    cout << endl;

    // passing by COPY
    for (string s: names2) {
        cout << s.append("!!") << " ";
    }
    cout << endl;
    for (int i = 0; i < size(names2); i++) {
        cout << names2[i] << " ";
    }
    cout << endl;

    // passing by  REFERENCE
    for (string &s: names2) {
        cout << s.append("!!") << " ";
    }
    cout << endl;
    for (int i = 0; i < size(names2); i++) {
        cout << names2[i] << " ";
    }
    cout << endl;

    return 0;
}