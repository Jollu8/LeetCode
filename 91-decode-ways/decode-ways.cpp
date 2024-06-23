class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+2);
        dp[n] = 1;
        for(int i = n-1; i >= 0 ; --i){
            if(s[i] == '0' )continue;
            dp[i] = (s[i] == '1' || (s[i] == '2' && s[i+1] <  '7')) ? dp[i+2] + dp[i+1] : dp[i+1];
        }
        return dp[0];
        
    }
};