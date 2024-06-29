class Solution {
    vector<int> dp;
    vector<vector<int> > ans;


    void bkg(int ind, int n, int k) {
        if(k == dp.size()) {
            ans.emplace_back(dp);
            return;
        }

        for(int i = ind; i <= n; ++i) {
            dp.push_back(i);
            bkg(i +1, n, k);
            dp.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        bkg(1, n, k);
        return ans;
    }
};