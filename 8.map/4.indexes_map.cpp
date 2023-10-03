#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<int>> indexesMap(vector<int> a) {
    map<int, vector<int>> indexesMap;
    for (int i = 0; i < size(a); i++) {
        if (indexesMap.find(a[i]) != indexesMap.end()) {
            indexesMap[a[i]].push_back(i);
        } else {
            indexesMap[a[i]] = vector<int>{i};
        }
    }
    return indexesMap;
}

int main() {
    vector<vector<int>> testCases = {{1, 1, 4,5, 8, 8, 8, 2}, {1, 1, 1, 1, 0, 0}, {}, {1}};
    for (int i = 0; i < size(testCases); i++) {
        cout << "test: " << i << endl;
        auto map = indexesMap(testCases[i]);
        cout << "result: " << endl;
        for (auto it = map.begin(); it != map.end(); it++) {
            cout << "( " << it->first << ", [ ";
            for (int i = 0; i < size(it->second); i++) {
                cout << it->second[i] << " ";
            }
            cout << "] ) \n";
        }
        cout << endl;
    }
    return 0;
}