#include <iostream>
using namespace std;

struct Produto {
    int id;
    string name;
    double price;
};

int main() {
    Produto produto1 = {1, "aa", 30.8};
    Produto produto2 = {id: 1, name:"a", price: 20};

    cout << "produto1: " << produto1.name << " " << produto1.id << " " << produto1.price << endl;
    cout << "produto2: " << produto2.name << " " << produto2.id << " " << produto2.price << endl;

    return 0;
}