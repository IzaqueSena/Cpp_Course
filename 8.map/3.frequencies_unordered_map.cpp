#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// O(n)
unordered_map<int, int> frequenciesMap(vector<int> a) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size(a); i++) {
        if (freq.find(a[i]) != freq.end()) {
            freq[a[i]]++;
        } else {
            freq[a[i]] = 1;
        }
    }
    return freq;
}

unordered_map<int, int> frequenciesMap2(vector<int> a) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size(a); i++) {
        freq[a[i]]++;
    }
    return freq;
}

int main() {
    vector<vector<int>> testCases = {{1, 1, 4,5, 8, 8, 8, 2}, {1, 1, 1, 1, 0, 0}, {}, {1}, {0}};
    for (int i = 0; i < size(testCases); i++) {
        cout << "test: " << i << endl;
        auto map = frequenciesMap2(testCases[i]);
        cout << "result: " << endl;
        for (auto it = map.begin(); it != map.end(); it++) {
            cout << "( " << it->first << ", " << it->second << " ) ";
        }
        cout << endl;
    }
    return 0;
}