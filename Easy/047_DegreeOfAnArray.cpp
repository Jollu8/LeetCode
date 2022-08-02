///// @Jollu
// 697. Degree of an Array

#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <climits>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int findShortestSubArray(vector<int> &nums) {
        int res =INT_MAX, max_count=INT_MIN;
        unordered_map<int,vector<int>> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]]= {i,i,1};
            }
            else{
                m[nums[i]][1] = i;
                m[nums[i]][2]++;
            }
        }

        for(auto &ele:m){
            if(ele.second[2]>max_count){
                max_count = ele.second[2];
                res = ele.second[1]-ele.second[0]+1;
            }
            else if(max_count==ele.second[2]){
                res = min(ele.second[1]-ele.second[0]+1,res);

            }
        }
        return res;
    }
};