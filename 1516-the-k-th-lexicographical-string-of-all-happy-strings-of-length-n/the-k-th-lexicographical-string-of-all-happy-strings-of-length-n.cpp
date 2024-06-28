class Solution {

public:
    string getHappyString(int n, int k) {
        string ans, dp;
        vector<char> dex{'a', 'b', 'c'};
        function<void(int, int&)> bkg = [&](int a, int& b) {
            if (dp.size() == a) {
                if (--b == 0)
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
        };
        bkg(n, k);
        return ans;
    }
};