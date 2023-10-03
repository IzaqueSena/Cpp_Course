#include <iostream>
using namespace std;

int main() {
    string a = "Hi";
    string& ref = a;

    cout << "a: " << a << "\t" << &a << endl;
    cout << "ref: " << ref << "\t" << &a << endl;

    string name = "Peter";
    ref = name;
    cout << "name: " << name << "\t" << &name << endl;
    cout << "ref: " << ref << "\t" << &a << endl;
    cout << "a: " << a << "\t" << &a << endl;

    ref.append("ola");
    cout << "name: " << name << "\t" << &name << endl;
    cout << "ref: " << ref << "\t" << &a << endl;
    cout << "a: " << a << "\t" << &a << endl;

    return 0;
}