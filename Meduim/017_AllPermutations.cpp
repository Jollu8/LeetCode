////@jollu

//46. Permutations
//Medium
//
//11586
//
//205
//
//Add to List
//
//Share
//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
//
//
//
//Example 1:
//
//Input: nums = [1,2,3]
//Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
//Example 2:
//
//Input: nums = [0,1]
//Output: [[0,1],[1,0]]
//Example 3:
//
//Input: nums = [1]
//Output: [[1]]

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        do {
            vec.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return vec;
    }
};

int main() {
    Solution s;
    vector<int>vec {1,2,3};
    auto res  = s.permute(vec);
    for(auto i : res){
        for(auto j : i) {
            cout << j << ",";
        }
        cout << endl;
    }

}