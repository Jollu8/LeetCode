class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> vec(m+1, vector<int>(n+1, 0));
        vec[1][0] = 1;
        for(auto i = 1; i< m+1; ++i)
            for(auto j = 1; j < n+1; ++j) {
                vec[i][j] = vec[i-1][j] + vec[i][j-1];
        }
        return vec[m][n];
    }
};