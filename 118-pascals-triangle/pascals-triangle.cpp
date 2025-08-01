class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ans(numRows);
        int cnt = 1;

        for(int i = 0; i < numRows; ++i) {
            std::vector<int> L(cnt++, 0);
            L[0] = 1;
            L[L.size()-1] = 1;
            ans[i] = std::move(L);
        }

        if(numRows <= 2) return ans;

        for(int i = 2; i < numRows; ++i) {
            for(int j = 1; j < i; ++j) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;

    }
};