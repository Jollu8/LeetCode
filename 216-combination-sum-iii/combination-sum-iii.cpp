class Solution {
    vector<vector<int>> ans;
    vector<int> dp;

    void bkg(int ind, int k, int n) {
        if (k == 0 && n == 0) {
            ans.emplace_back(dp);
            return;
        }
        if (n < 0)
            return;
        for (int i = ind; i < 10; ++i) {
            if (i > ind && i == i - 1)
                continue;
            dp.push_back(i);
            bkg(i + 1, k - 1, n - i);
            dp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {

        bkg(1, k, n);
        return ans;
    }
};