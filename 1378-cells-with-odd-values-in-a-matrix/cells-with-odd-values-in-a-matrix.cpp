class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>> &indices) {
        vector<bool> r(n), c(m);
        int ans = 0;
        for (auto &idx: indices){ 
            r[idx[0]] = !r[idx[0]];
             c[idx[1]] = !c[idx[1]];
        
        }
      
        for (auto i = 0; i < n; ++i)
            for (auto j = 0; j < m; ++j)
                ans += r[i] ^ c[j];

        return ans;
    }
};