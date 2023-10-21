#include <iostream>
using namespace std;

class User {
public:
    string name;
    string email;

    User() {}

    User(string name, string email) {
        // (*this).name = name;
        // (*this).email = email;
        this->name = name;
        this->email = email;
    }

    string toString() {
        return name + " [" + email + "]";
    }
};

int main() {
    User user("Adan J", "adam@hmai.com");

    cout << user.toString() << endl;

    return 0;
}