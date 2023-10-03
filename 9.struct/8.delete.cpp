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
    Product *prodPtr1 = new Product{1, "", 0};
    Product *p1, *p2, *p3;
    p1 = prodPtr1; 
    {
        Product *prodPtr2 = new Product{2, "", 0};
        p2 = prodPtr2;
        {
            Product *prodPtr3 = new Product{3, "", 0};
            p3 = prodPtr3;
            delete prodPtr3;
        }
        {
            string a = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
            string b = "bbbbbbbbbbbbbbbbbbbbbbbbbb";
        }
        delete prodPtr2;
        string c = "ccccccccccccccccccccc";
    }
    delete prodPtr1;
    string d = "dddddddddddddddddddddd";
    string e = "eeeeeeeeeeeeeeeeee";
    cout << "p1: " << p1 << " " << (*p1).id << endl;
    cout <<"p2: " << p2 << " " << (*p2).id << endl;
    cout <<"p3: " << p3 << " " << (*p3).id << endl; 

    return 0;
}