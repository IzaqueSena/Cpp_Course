#include <iostream>
using namespace std;

struct Produto {
    int id;
    string name;
    double price;
};

int main() {
    Produto produto1;
    produto1.name = "TV";
    produto1.id = 1;
    produto1.price = 30.6;

    cout << "produto1: " << produto1.name << " " << produto1.id << " " << produto1.price << endl;

    return 0;
}