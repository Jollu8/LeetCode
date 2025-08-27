class Solution {
public:
    int n, m;
    int del_rows[4] = {+1, -1, -1, +1};
    int del_cols[4] = {+1, -1, +1, -1};
    int turnClockwise[4] = {3, 2 , 0 , 1};

    int diag(vector<vector<int>>& grid, int row, int col, int current,
             bool turned, int expected) {

        if (row < 0 || row >= n || col < 0 || col >= m) return 0;
        if (grid[row][col] != expected) return 0;

        int cont = 1; 

        int nextExpected = (expected == 1 ? 2 : (expected == 2 ? 0 : 2));

        int nrow = row + del_rows[current];
        int ncol = col + del_cols[current];
        cont = max(cont, 1 + diag(grid, nrow, ncol, current, turned, nextExpected));

        if (!turned) {
            int ndir = turnClockwise[current];
            int trow = row + del_rows[ndir];
            int tcol = col + del_cols[ndir];
            cont = max(cont, 1 + diag(grid, trow, tcol, ndir, true, nextExpected));
        }

        return cont;
    }

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int maxi = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) { 
                    for (int k = 0; k < 4; k++) {
                        maxi = max(maxi, diag(grid, i, j, k, false, 1));
                    }
                }
            }
        }
        return maxi;
    }
};