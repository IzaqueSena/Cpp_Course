#include <iostream>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    string toString() {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

int main() {
    Date d1;
    d1.day = 3; d1.month = 11; d1.year = 2023;
    cout << &d1 << " " << d1.day << "/" << d1.month << "/" << d1.year << endl; 
    cout << d1.toString() << endl;

    return 0;
}