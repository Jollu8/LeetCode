class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
        a[1][1] = (mat[0][0] == 1) ? 0 : 1;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j) {
                if (i == 1 && j == 1 || mat[i - 1][j - 1] == 1)
                    continue;
                a[i][j] = a[i][j - 1] + a[i - 1][j];
            }

        return a[n][m];
    }
};
