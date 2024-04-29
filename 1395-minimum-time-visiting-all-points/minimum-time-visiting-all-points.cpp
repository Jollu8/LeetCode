class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& A) {
        int ans{};
        auto cnt = A[0];
        for(auto i = 1; i < A.size(); ++i) {
            ans += max(abs(cnt[0] - A[i][0]), abs(cnt[1] - A[i][1]));
            cnt = A[i];
        }
        return ans;
    }
};