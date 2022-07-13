////@jollu
// 18. 4Sum
//Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
//
//0 <= a, b, c, d < n
//        a, b, c, and d are distinct.
//nums[a] + nums[b] + nums[c] + nums[d] == target
//        You may return the answer in any order.
//
//
//
//Example 1:
//
//Input: nums = [1,0,-1,0,-2,2], target = 0
//Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < len; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < len; j++) {

                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long sum1 = target - nums[i] - nums[j] * 1L;
                int low = j + 1;
                int high = len - 1;

                while (low < high) {

                    int sum2 = nums[low] + nums[high];
                    if (sum2 < sum1) {
                        low++;
                    } else if (sum2 > sum1) {
                        high--;
                    } else {// equal to sum1
                        ans.push_back({nums[i], nums[j], nums[low], nums[high]});

                        int lowDup = nums[low];

                        while (low < high && nums[low] == lowDup) low++;
                        int highDup = nums[high];

                        while (high > low && nums[high] == highDup) high--;

                    }
                }
            }
        }

        return ans;

    }
};

int main() {
    Solution s;
    vector<int> vec{1,0,-1,0,-2,2};
    auto res = s.fourSum(vec, 0);
    for (auto i: res) {
        for (auto j: i) {
            cout << j << " ";
        }
    }

}