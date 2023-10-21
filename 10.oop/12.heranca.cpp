#include <iostream>
using namespace std;

class Base {
public:
    void printNumbersAndSum(int num1, int num2) {
        cout << num1 << endl;
        cout << num2 << endl;
        cout << sumNum(num1, num2) << endl;
    }

private:
    float num1, num2;
    float sumNum(int n1, int n2) {
        return (n1 + n2);
    }

protected: 
    int x;
};

class Derivada : public Base {

};

int main() {
    Derivada a;
    a.printNumbersAndSum(2, 3);

    return 0;
}