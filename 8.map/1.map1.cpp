#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> map;
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;
    
    for (auto it = map.begin(); it != map.end(); it++) {
        cout << "key: " << it->first << ", value: " << it->second << endl;
    }
    return 0;
}

// map operations are O(logn) time complexity.