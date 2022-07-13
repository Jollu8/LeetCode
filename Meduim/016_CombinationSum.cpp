////@jollu

// 39. Combination Sum
//Medium
//
//11971
//
//253
//
//Add to List
//
//Share
//Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
//
//The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.
//
//It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
//
//
//
//Example 1:
//
//Input: candidates = [2,3,6,7], target = 7
//Output: [[2,2,3],[7]]
//Explanation:
//2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
//7 is a candidate, and 7 = 7.
//These are the only two combinations.


#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<int>& candidates, int target, int idx, int sum, vector<int> path){
        if(idx >= candidates.size() || candidates[idx] + sum > target)
            return;
        if(candidates[idx] + sum == target){
            path.push_back(candidates[idx]);
            res.push_back(path);
            return;
        }

        if(candidates[idx] + sum < target){
            //choose curr
            path.push_back(candidates[idx]);
            helper(candidates,target,idx,sum+candidates[idx],path);
            //don't choose curr
            path.pop_back();
            helper(candidates,target,idx+1,sum,path);
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        res.clear();
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        helper(candidates,target,0,0,path);
        return res;
    }
    };
int main() {
    Solution s;
}