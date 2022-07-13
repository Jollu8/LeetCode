////@jollu
//31. Next Permutation

//Example 1:
//
//Input: nums = [1,2,3]
//Output: [1,3,2]
//Example 2:
//
//Input: nums = [3,2,1]
//Output: [1,2,3]



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        next_permutation(nums.begin(), nums.end());

    }
};


int main() {
    Solution s;
    vector<int> vec{3, 2, 2, 3};
    s.nextPermutation(vec);
    for (auto i: vec) {
        cout << i << " ";
    }


}