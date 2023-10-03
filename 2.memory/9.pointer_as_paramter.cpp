#include <iostream>
using namespace std;

// receive as copy
void receivePtrAsCopy(int *p) {
    cout << "p: " << p << endl;
    p = p + 1;
    cout << "p=p + 1 => p: " << p  << endl;
}

// receive as reference
void receivePtrAsRef(int* &p) {
    cout << "p: " << p << endl;
    p = p + 1;
    cout << "p=p + 1 => p: " << p  << endl;
}


int main() {
    int var = 11;
    int *ptr = &var;

    cout << "var: " << var << " &var: " << &var << endl;
    cout << "ptr: " << ptr << " *ptr: " << *ptr << endl;
    
    receivePtrAsCopy(ptr);
    cout << "receiveAsCopy" << endl;
    cout << "ptr: " << ptr << endl; 

    receivePtrAsRef(ptr);
    cout << "receiveAsReference" << endl;
    cout << "ptr: " << ptr << endl; 

    return 0;
}