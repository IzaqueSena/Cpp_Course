#include <iostream>
using namespace std;

int main()  {
    int x;

    cout << "Entrer the initial value: ";
    cin >> x;

    x += 10;
    cout << x << endl;
    x -= 9;
    cout << x << endl;
    x *= 10;
    cout << x << endl;
    x /= 9;
    cout << x << endl;
    
    return 0;
}