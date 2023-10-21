#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int health;
    Player(string n, int h= 100) : name(n), health(h) {}
    ~Player() {cout << "destructor" << endl;}
};

void printPlayer(Player &p) {
    cout << p.name << " [" << p.health << "%]" << endl;
}

int main() {
    Player p("a", 100);
    printPlayer(p);
}