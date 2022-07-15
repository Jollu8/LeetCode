////@jollu

// Insert Sorting

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;


class Solution {
public:
    void sortColors(vector<int> &nums) {
        sort(nums.begin(), nums.end());

    }
};


int main() {
    Solution s;
    vector<int> vec{2, 0, 2, 1, 1, 0};
    s.sortColors(vec);
    for (auto i: vec) {
        cout << i << ",";
    }
}