#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> map;
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;
    
    if (map.find("two") != map.end()) {
        cout << map["two"] << endl;
    } else {
        cout << "there is not this key";
    }
    return 0;
}

