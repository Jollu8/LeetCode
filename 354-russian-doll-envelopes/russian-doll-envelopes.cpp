class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& e) {
        int n = e.size();
        sort(e.begin(), e.end(), [](auto &a, auto &b) {
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        vector<int> ans;
        for(int i = 0 ; i < n; ++i) {
            auto f = lower_bound(ans.begin(), ans.end(), e[i][1]);
            if(f == ans.end()) ans.emplace_back(e[i][1]);
            else *f = e[i][1];
        }
        return ans.size();
    }
};