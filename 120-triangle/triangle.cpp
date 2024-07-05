
class Solution {
    vector<vector<int>> dp, triangle;

    int memo(int i, int j) {
        if(i == triangle.size()-1) return triangle[i][j];
        if(dp[i][j] != 1e9) return dp[i][j];

        return dp[i][j] = triangle[i][j] + min(memo(i+1, j), memo(i+1, j+1));
    }

public:
    int minimumTotal(vector<vector<int>>& tri) { 
        triangle = move(tri);
        int m {};
        for(auto &v : triangle) {
            m = max(m, (int)v.size());
        }
        dp = vector<vector<int>>(m+1, vector<int> (m+1, 1e9));
        return memo(0,0);
     }
};