class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int m = INT_MAX;
        int index = -1;
        for(int i = 0 ; i < nums.size(); ++i){
            if(int ans = i % 10; ans ==  nums[i] && ans < m) return i;
        }
        return index;
    }
};