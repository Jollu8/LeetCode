class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int m = INT_MAX;

        for(int i = 0 ; i < nums.size(); ++i){
            if(int ans = i % 10; ans ==  nums[i]) return i;
        }
        return -1;
    }
};