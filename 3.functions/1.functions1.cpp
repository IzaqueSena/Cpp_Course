#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello\n";
}

void sayHelloTo(string name) {
    cout << "Hello " << name << endl;
}

string returnHi() {
    return "Hi";
}

string returnHiTo(string name) {
    return "Hi " + name + "!";
}

int main() {
    sayHello();
    sayHelloTo("Peter");
    string result = returnHi();
    cout << result.append("!!!") << endl;
    cout << returnHiTo("Mike") << endl;
    return 0;
}