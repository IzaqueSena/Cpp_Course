#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    double price;

    Product(int _id, string _name, double _price) 
        : id(_id), name(_name), price(_price) {
        cout << "Product created id: " << id << endl;
    }
    ~Product() {cout << "Product destroyed id: " << id << endl;}
};

int main() {
    Product product1 = {1, "", 0};
    Product *p1, *p2, *p3;
    p1 = &product1; 
    {
        Product product2 = {2, "", 0};
        p2 = &product2;
        {
            Product product3 = {3, "", 0};
            p3 = &product3;
        }
        {
            string a = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
            string b = "bbbbbbbbbbbbbbbbbbbbbbbbbb";
        }
        string c = "ccccccccccccccccccccc";
    }
    string d = "dddddddddddddddddddddd";
    string e = "eeeeeeeeeeeeeeeeee";
    cout << "p1: " << p1 << " " << (*p1).id << endl;
    cout <<"p2: " << p2 << " " << (*p2).id << endl;
    cout <<"p3: " << p3 << " " << (*p3).id << endl; 

    return 0;
}