#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    nums.assign(10, 1);
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nums[3] = 19;
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nums.erase(nums.begin() + 3);
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nums.clear();
    cout << nums.size() << endl;
    return 0;
}