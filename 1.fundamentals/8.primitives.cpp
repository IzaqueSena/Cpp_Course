#include <iostream>
using namespace std;

int main() {
    bool isAdmin = true; // false: 0, true: any value content
    cout << isAdmin << endl;

    char symbol = 'a';
    char letra('#');
    cout << symbol << letra << endl;

    int age = 31;
    // datatype modifiers: signed, unsigned, long, short
    cout << age << endl;

    float pi = 3.14;
    double Pi = 3.141592;
    cout << pi << endl;
    cout << Pi << endl;
    
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "shor int: " << sizeof(short int) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;

    return 0;
}

