#include <iostream>
using namespace std;

int main() {
    int age = 19; // intializing 
    double price; // declaring
    price = 99.8; // assigning
    double tax = 0.08;

    price = price * (1 + tax);
    printf("The final price is %f\n", price);
    printf("The final price is %.2f\n", price);
    printf("My age is %d\n", age);

    return 0;
}