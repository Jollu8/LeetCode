class Solution {
    string ans;
    vector<char> dex{'a', 'b', 'c'};

    int bkg(int n, int k, string dp) {
        if (dp.size() == n) {
            if (--k == 0) {
                ans = dp;
                return 0;
            }

            return k;
        }

        for (auto c : dex) {
            if (dp.empty() || dp.back() != c) {
                k = bkg(n, k, dp + c);
                if (!k)
                    return 0;
            }
        }
        return k;
    }

public:
    string getHappyString(int n, int k) { return bkg(n, k, "") ? "" : ans; }
};