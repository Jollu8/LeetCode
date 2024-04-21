class Solution {
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
        set<int> n1(nums1.begin(), nums1.end());
        set<int> n2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);

        for (auto i: n1) {
            if (!n2.contains(i))ans[0].push_back(i);
        }
        for (auto i: n2) {
            if (!n1.contains(i))ans[1].push_back(i);
        }
        return ans;
    }
};