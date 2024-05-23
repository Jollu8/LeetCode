class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        if(nums2.empty() || nums1.empty()) return ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        auto a = nums1.begin();
        auto b = nums2.begin();
        
        while(a != nums1.end() && b != nums2.end()){
            if(*a < *b) ++a;
            else if(*a > *b) ++b;
            else{
                ans.push_back(*a);
                ++a;
                ++b;
            }
        }
        return ans;
    }
};
