////@jollu

// 153 Find Minimum in Rotated Array

#include <iostream>
#include <vector>
#include <climits>


using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        auto min = min_element(nums.begin(), nums.end());
        return min[0];
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 1, 1, 2, 0,2, 3};
    cout << s.removeDuplicates(vec);
}