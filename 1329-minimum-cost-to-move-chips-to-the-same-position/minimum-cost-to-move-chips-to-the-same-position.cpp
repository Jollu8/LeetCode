class Solution {
public:
    int minCostToMoveChips(vector<int>& A) {
        int cnt[2] = {};
        for(auto i : A) ++cnt[i%2];
        return min(cnt[0], cnt[1]);
    }
};