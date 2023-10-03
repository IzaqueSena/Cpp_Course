#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    double price;

    Product() {
        id = 999;
        name = "standard";
        price = 100;
        cout << "Product created id: " << id << endl;
    }

    Product(int _id, string _name, double _price) 
        : id(_id), name(_name), price(_price) {
        cout << "Product created id: " << id << endl;
    }
};

int main() {
    Product* prodPtr1 = new Product;
    cout << "product1: " << prodPtr1->id << " " << prodPtr1->name << " " << prodPtr1->price << endl;
    Product* prodPtr2 = new Product(2, "a", 90);
    cout << "product2: " << prodPtr2->id << " " << prodPtr2->name << " " << prodPtr2->price << endl;
    return 0;
}