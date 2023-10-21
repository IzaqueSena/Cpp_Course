#include <iostream>
using namespace std;

class Employee {
private:
    double wage;
public:
    string name;
    double getWage() {
        return wage;
    }

    void setWage(double w) {
        wage = w;
    }
};

int main() {
    Employee emp1;
    emp1.name = "Paul Smith";
    emp1.setWage(10);
    
    cout << "US$" << emp1.getWage() << endl;

    return 0;
}