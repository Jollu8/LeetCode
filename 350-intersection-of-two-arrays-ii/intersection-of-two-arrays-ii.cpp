class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;

        for (int f1 = 0, f2 = 0; f1 < nums1.size() && f2 < nums2.size();) {
            if (nums1[f1] == nums2[f2]) {
                ans.emplace_back(nums1[f1++]);
                f2++;
            }
            else if(nums1[f1] < nums2[f2])++f1;
            else if(nums1[f1] > nums2[f2]) f2++;
        }
        return ans;
    }

};