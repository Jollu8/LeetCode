////@jollu
// Two Sum
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//You can return the answer in any order.
//
//
//
//Example 1:
//
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].



#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> hashmap;
        int i=0;
        while(i<nums.size()){
            int expval = target-nums[i];
            if(hashmap.find(expval)!=hashmap.end()){
                result.push_back(hashmap[expval]);
                result.push_back(i);
                break;
            }
            else{
                hashmap.insert({nums[i],i});
            }
            i++;
        }
        return result;

    }
};

int main() {
    Solution s;
    vector<int> vec{2, 7, 11, 15};
    auto v = s.twoSum(vec, 9);
    for (auto i: v) { cout << i << ' '; }

}