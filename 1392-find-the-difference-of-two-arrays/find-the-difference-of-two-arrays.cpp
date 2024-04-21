class Solution {
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
        set<int> n1(nums1.begin(), nums1.end());
        set<int> n2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);

        set_difference(n1.begin(), n1.end(), n2.begin(), n2.end(), back_inserter(ans[0]));
        set_difference(n2.begin(), n2.end(), n1.begin(), n1.end(), back_inserter(ans[1]));
        return ans;
    }
};