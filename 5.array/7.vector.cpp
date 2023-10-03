#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(2);
    nums[0] = 10;
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (auto i = nums.begin(); i != nums.end(); i++) {
        if (*i == 4) {
            *i = 0; 
        }
        cout << *i << " ";
    }
    cout << endl;
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}