class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a(nums1.begin(), nums1.end());
        vector<int> ans;
        for(auto i : nums2){
            if(a.contains(i)){
                ans.push_back(i);
                a.erase(i);
            }
        }
        return ans;
        
        
    }
};