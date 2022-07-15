////@jollu

// 47. Permutations II
//Medium
//
//6030
//
//106
//
//Add to List
//
//Share
//Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
//
//
//
//Example 1:
//
//Input: nums = [1,1,2]
//Output:
//[[1,1,2],
// [1,2,1],
// [2,1,1]]

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        do {
            vec.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return vec;
    }
};

int main() {
    Solution s;
    vector<int>vec {2,2,1,1};
    auto res  = s.permute(vec);
    for(auto i : res){
        for(auto j : i) {
            cout << j << ",";
        }
        cout << endl;
    }

}