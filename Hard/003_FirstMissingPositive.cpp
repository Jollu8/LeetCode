////@jollu

// 41. First Missing Positive
//Hard
//
//10446
//
//1391
//
//Add to List
//
//Share
//Given an unsorted integer array nums, return the smallest missing positive integer.
//
//You must implement an algorithm that runs in O(n) time and uses constant extra space.
//
//
//
//Example 1:
//
//Input: nums = [1,2,0]
//Output: 3
//Example 2:
//
//Input: nums = [3,4,-1,1]
//Output: 2
//Example 3:
//
//Input: nums = [7,8,9,11,12]
//Output: 1


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0;
        bool res = false;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                res = true;
            }
            if(nums[i]<1){
                start++;
            }
        }
        if(!res){
            return 1;
        }
        int j = 1;
        for(int i=start;i<n;i++){
            if(nums[i]!=j){
                return j;
            }
            if(i+1<n && nums[i]==nums[i+1]){
                j--;
            }
            j++;
        }
        return j;
    }

};

int main() {
    Solution s;
    vector<int>vec {7,8,9,11,12};
    cout << s.firstMissingPositive(vec);
}