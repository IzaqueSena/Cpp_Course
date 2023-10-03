#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    double price;
};

int main() {
    Product* prodPtr1 = new Product;
    prodPtr1->id = 1;
    prodPtr1->name = "a";
    prodPtr1->price = 2.6;
    cout << "product1: " << prodPtr1->id << " " << prodPtr1->name << " " << prodPtr1->price << endl;
   
    return 0;
}