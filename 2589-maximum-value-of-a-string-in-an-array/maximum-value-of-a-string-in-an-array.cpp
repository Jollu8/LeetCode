class Solution {
    bool is_d(string &s) {
        for (auto c: s)if (!isdigit(c)) return false;
        return true;
    }

public:
    int maximumValue(vector<string> &v) {
        int s_ans{}, i_ans{}, cnt{};
        for (auto &s: v) {
            if (is_d(s)) i_ans = max(i_ans, stoi(s));
            else s_ans = max(s_ans, (int) s.size());
        }
        return (s_ans >= i_ans) ? s_ans : i_ans;
    }
};