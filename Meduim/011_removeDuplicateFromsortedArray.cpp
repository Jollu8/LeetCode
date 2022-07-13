////@jollu
//26. Remove Duplicates from Sorted Array
//Input: nums = [1,1,2]
//Output: 2, nums = [1,2,_]
//Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
//It does not matter what you leave beyond the returned k (hence they are underscores).

#include <iostream>
#include <vector>
#include <algorithm>

#include <ranges>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        std::ranges::sort(nums);
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        return nums.size();
    }

};

int main() {
    Solution s;
    vector<int> vec{1, 2, 1};
    cout << s.removeDuplicates(vec) << endl;
    for (auto i: vec) {
        cout << i << " ";
    }


}