#include <iostream>
using namespace std;


class Date {
public:
   int day;
   int month;
   int year;
};


int main() {
   Date d1{3, 11, 2023};
   cout << &d1 << " " << d1.day << "/" << d1.month << "/" << d1.year << endl;


   return 0;
}
