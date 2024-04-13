class Solution {
public:
    int minimumTotal(vector<vector<int>>& tr) {
        for(int i = tr.size() - 2; i >= 0; --i) {
            for(int j = 0; j <= i; ++j) {
                tr[i][j] += min(tr[i+1][j], tr[i+1][j+1]);
            }
        }
        return tr[0][0];
    }
};
