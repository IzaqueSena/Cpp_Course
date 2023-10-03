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
    Product product1;
    cout << "product1: " << product1.id << " " << product1.name << " " << product1.price << endl;
    Product product2 = {2, "a", 90};
    cout << "product2: " << product2.id << " " << product2.name << " " << product2.price << endl;

    return 0;
}