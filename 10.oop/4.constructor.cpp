#include <iostream>
using namespace std;

class User {
public:
    string name;
    string email;

    User() {}

    User(string _name, string _email) {
        name = _name;
        email = _email;
    }

    string toString() {
        return name + " [" + email + "]";
    }
};

int main() {
    User user1;  // or
    User user2 = User();

    User user3("Adan J", "adam@hmai.com"); // or
    User user4 = User("Adan J", "adam@hmai.com");    

    return 0;
}