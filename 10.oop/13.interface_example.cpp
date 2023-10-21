#include <iostream>
using namespace std;

class Bot {
public:
    virtual string getGreeting() = 0;
};

class EnglishBot : public Bot {
public:
    string getGreeting() override {
        return "Hi there!";
    }
};

class SpanishBot : public Bot {
public:
    string getGreeting() override {
        return "Hola!";
    }
};

void printGreeting(Bot &bot) {
    cout << bot.getGreeting() << endl;
}

int main() {
    EnglishBot eBot;
    SpanishBot sBot;
    printGreeting(eBot);
    printGreeting(sBot);

    return 0;
}