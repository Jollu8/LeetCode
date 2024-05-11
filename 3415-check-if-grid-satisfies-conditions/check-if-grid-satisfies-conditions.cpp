class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>&A) {
        int n = A.size(), m = A[0].size();
        for(int i =0 ; i < n; ++i)
            for(int j = 0; j < m; ++j)
                if( i+1 < n && A[i][j] != A[i+1][j] || j+1 < m && A[i][j] == A[i][j+1]) return false;
        return true;
    }
};