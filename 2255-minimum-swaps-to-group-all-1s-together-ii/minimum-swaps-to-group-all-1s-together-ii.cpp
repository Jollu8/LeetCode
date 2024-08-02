class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int cnt = 0;
        for(auto it:nums) if(it) cnt++;
        int present = 0;
        int l=0,r=0;
        for( r=0;r<cnt;r++)
        {
            if(nums[r]==1) present++;
            
        }
        
        for(int i=0;i<cnt-1;i++) nums.push_back(nums[i]);
        int ans  = INT_MAX;
        ans = min(ans,cnt-present);
        while(r<nums.size())
        {
            if(nums[r]==1)present+=1;
            if(nums[l]==1) present-=1;
            l++;
            r++;
            ans = min(ans,cnt-present);
        }
       
        return ans;
    }
};