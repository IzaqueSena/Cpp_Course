#include <iostream>
using namespace std;

class User {
public:
    string name;
    string email;

    User() {}

    User(string name, string email)
        : name(name), email(email)  {}

    string toString() {
        return name + " [" + email + "]";
    }
};

int main() {
    User user3("Adan J", "adam@hmai.com");
    cout << user3.toString();

    return 0;
}