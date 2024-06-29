
class Solution {

    void bkg(int ind, string& s, vector<string>& dp,
             vector<vector<string>>& buf) {
        if (ind == s.size()) {
            buf.emplace_back(dp);
            return;
        }

        for (int i = 1; ind + i <= s.size(); ++i) {
            dp.emplace_back(s.substr(ind, i));
            bkg(i + ind, s, dp, buf);
            dp.pop_back();
        }
    }

    bool calc(int n) {
        vector<string> dp;
        vector<vector<string>> buf;
        string s = to_string(n * n);

        bkg(0, s, dp, buf);

        for (auto& v : buf) {
            int tmp{};
            for (int i = 0; i < v.size() && tmp <= n; ++i)
                tmp += stoi(v[i]);
            if (n == tmp)
                return true;
        }
        return false;
    }

public:
    int punishmentNumber(int n) {
        int ans{};

        for (int i = 1; i <= n; ++i) {
            int x = i * i;
            if (calc(i))
                ans += x;
        }

        return ans;
    }
};