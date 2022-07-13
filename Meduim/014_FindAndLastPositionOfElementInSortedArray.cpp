////@jollu
//34. Find First and Last Position of Element in Sorted Array
//Example 1:
//
//Input: nums = [5,7,7,8,8,10], target = 8
//Output: [3,4]
//Example 2:
//
//Input: nums = [5,7,7,8,8,10], target = 6
//Output: [-1,-1]


#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> search(vector<int> &nums, int target) {
        vector<int> v;

        auto it = find(nums.begin(), nums.end(), target);
        if (it == nums.end()) {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }

        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        v.push_back(it1 - nums.begin());
        v.push_back(it2 - nums.begin() - 1);
        return v;
    }
};

int main() {
    Solution s;
    vector<int> vec{5, 7, 7, 8, 8, 10};
    auto res = s.search(vec, 8);
    for (auto i: res) {
        cout << i << " ";
    }
}