class Solution {
    vector<vector<int>> dp;
    int a,b;
    using ll = long long;
    ll lcs(string &s1, string &s2, int i, int j) {
        if(i == a && j == b) return 0;
        if(i == a) return accumulate(s2.begin() + j, s2.end(), 0);
        if(j == b) return accumulate(s1.begin() + i, s1.end(), 0);

        if(dp[i][j] != -1)return dp[i][j];
        ll ans = INT_MAX;
        if(s1[i] == s2[j]) ans = lcs(s1, s2, i+1, j+1);
        else {
            ans = min(ans, s1[i] + lcs(s1, s2, i+1, j));
            ans = min(ans, s2[j] + lcs(s1, s2, i, j+1));
        }
        return dp[i][j] = ans;
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        this->a = s1.size(), this->b = s2.size();
        dp = vector<vector<int>>(a, vector<int>(b, -1));
        return lcs(s1,s2,0,0);
    }
};
