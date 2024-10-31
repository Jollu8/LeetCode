typedef long long LL;
const int N = 110;

class Solution {
    int n, m;
    LL f[N][N][N];
public:
    LL minimumTotalDistance(vector<int>& rs, vector<vector<int>>& fs) {
        memset(f, -1, sizeof f);
        n = rs.size(), m = fs.size();
        sort(rs.begin(), rs.end());
        sort(fs.begin(), fs.end());
        return dfs(0, 0, 0, rs, fs);
    }
 
    LL dfs(int i, int j, int k, vector<int>& rs, vector<vector<int>>& fs) 
    {
        if (f[i][j][k] != -1) return f[i][j][k];
        LL& v = f[i][j][k];
        if (i == n)
        {
            return v = 0;
        }
        
        if (j == m) // impossible
        {
            return v = LONG_LONG_MAX;
        }

        if (k == fs[j][1]) // used up, must move on to next factory
        {
            return v = dfs(i, j + 1, 0, rs, fs);
        }
        else
        {
            // assign ith robot to j factory
            LL r1 = dfs(i + 1, j, k + 1, rs, fs);
            LL r2 = dfs(i, j + 1, 0, rs, fs);
            if (r1 > LONG_LONG_MAX / 2) return v = r2;
            else
                return v = min(r1 + abs(rs[i] - fs[j][0]), r2);
        }
    }
};