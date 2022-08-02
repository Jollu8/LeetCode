///// @Jollu
// Binary search

#include <iostream>
#include <vector>
#include <array>
//#include <set>
//#include <climits>
//#include <unordered_>
//#include <algorithm>

using namespace std;


class Solution {
public:
    int search(vector<int> &nums, int target) {
        auto pos = lower_bound(nums.begin(), nums.end(), target);
        if (pos == nums.end() || *pos != target) return -1;
        else {
            return distance(nums.begin(), pos);
        }
    }
};

int main() {
    vector<int> vec{-1, 0, 3, 5, 9, 12};
    Solution s;
    cout << s.search(vec, 9);
}