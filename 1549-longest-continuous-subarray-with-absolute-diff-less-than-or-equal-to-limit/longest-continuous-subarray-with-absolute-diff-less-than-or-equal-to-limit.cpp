class Solution {
public:
    int longestSubarray(vector<int> &A, int limit) {
        int ans{}, max_el, min_el, a, b;
        multiset<int> mp;
        for (int l{}, r{}; r < A.size(); r++) {
            mp.insert(A[r]);
            for (; abs(*mp.rbegin() - *mp.begin()) > limit; ++l) mp.erase(mp.find(A[l]));
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};