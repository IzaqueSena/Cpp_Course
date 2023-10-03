#include <iostream>
using namespace std;

int main() {
    string title = "Mr. ";
    string name("John");
    string end(10, '!');

    // string methods and index
    cout << name << endl;
    cout << name.size() << endl;
    cout << name[2] << endl;
    cout << name.back() << endl;
    cout << end << endl;

    // string concatenation
    cout << title + name << endl;
    title += name;
    cout << title << endl;
    cout << title.append(name) << endl;
    cout << title << endl;

    return 0;
}