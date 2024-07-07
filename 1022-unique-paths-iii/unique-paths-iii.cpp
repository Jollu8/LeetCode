class Solution {
    vector<vector<int>> grid;
    int count, n, m;

    int bkg(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == -1)
            return 0;
        if (grid[i][j] == 2)
            return (count == -1 ? 1 : 0);

        grid[i][j] = -1;
        count--;
        int a1 = bkg(i + 1, j);
        int a2 = bkg(i - 1, j);
        int a3 = bkg(i, j + 1);
        int a4 = bkg(i, j - 1);
        grid[i][j] = 0;
        count++;

        return a1 + a2 + a3 + a4;
    }

public:
    int uniquePathsIII(vector<vector<int>>& g) {
        n = g.size(), m = g[0].size();
        count = 0;

        int ai = -1, aj = -1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (g[i][j] == 1) {
                    ai = i;
                    aj = j;
                } else if (!g[i][j])
                    count++;
            }
        }
        grid = move(g);
        return bkg(ai, aj);
    }
};