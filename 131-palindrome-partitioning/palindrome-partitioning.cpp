class Solution {
    string s;
    vector<string> dp;
    vector<vector<string>> ans;

    bool is_valid(int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            ++l;
            --r;
        }
        return true;
    }

    void bkg(int ind, int n) {
        if (ind == n) {
            ans.emplace_back(dp);
            return;
        }

        for (int i = ind; i < n; ++i) {
            if (is_valid(ind, i)) {

                dp.push_back(s.substr(ind, i - ind + 1));
                bkg(i + 1, n);
                dp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        this->s = move(s);
        bkg(0, n);
        return ans;
    }
};