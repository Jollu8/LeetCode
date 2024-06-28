class Solution {
    string ans, dp;
    vector<char> dex{'a', 'b', 'c'};

    void bkg(int n, int& k) {

        if (dp.size() == n) {
            if (--k == 0)
                ans = dp;
            return;
        }
        for (auto c : dex) {
            if (dp.empty() || dp.back() != c) {
                dp.push_back(c);
                bkg(n, k);
                dp.pop_back();
            }
            if (!k)
                break;
        }
    }

public:
    string getHappyString(int n, int k) {
        bkg(n, k);
        return ans;
    }
};