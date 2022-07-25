///// @Jollu
// 628. Maximum Product of Three Numbers



#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return max((nums[n - 1] * nums[n - 2] * nums[n - 3]), (nums[0] * nums[1] * nums[n - 1]));
    }


};

int main() {
    Solution s;

}