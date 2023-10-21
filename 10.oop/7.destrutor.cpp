#include <iostream>
using namespace std;

class Person {
public: 
    string name;
    Person(string name) : name(name) {
        cout << "Hello! My name is " << name << endl;
    }
    ~Person() {
        cout << name << " saying goodbye!" << endl;
    }
};

int main() {
    Person p1("Peter");
    
    {
        Person p2("Marry");
        {
            Person p3("Adrian");
        }
    }
}