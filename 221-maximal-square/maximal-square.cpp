class Solution {
public:
        int maximalSquare(vector<vector<char>>& matrix) {
        int r = matrix.size();
        if(!r) return 0;
        int c = matrix[0].size(), s = 0;
        vector<vector<int>> dp(r+1, vector<int>(c+1));
        for(int i=1;i<=r;i++) 
            for(int j=1;j<=c;j++) {
                if(matrix[i-1][j-1]=='0') continue;
                s = max(s, dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))); 
	    }
        return s*s;
     }     
};