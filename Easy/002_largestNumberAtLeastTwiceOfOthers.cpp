//747. Largest Number At Least Twice of Others
//Example 1:
//
//Input: nums = [3,6,1,0]
//Output: 1
//Explanation: 6 is the largest integer.
//For every other number in the array x, 6 is at least twice as big as x.
//The index of value 6 is 1, so we return 1.



#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int dis= std::distance(nums.begin(), std::max_element(nums.begin(), nums.end()));
        std::sort(nums.begin(), nums.end(), [](auto & a, auto &b) {
            return a > b;
        });
        auto m = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i]  + nums[i] > m ) {
                return -1;
            } else {
                continue;
            }
        }

            return dis;
    }
};

int main(){
    std::vector<int> vec {1,2,3,4};
    Solution s;
    auto a = s.dominantIndex(vec);
    std::cout << a << std::endl;
}