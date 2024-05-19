class Solution {
public:
    string addStrings(string A1, string A2) {
        int cnt{};
        string ans;
        ans.reserve(max(A1.size(), A2.size()) + 2);
        auto a1 = A1.rbegin();
        auto a2 = A2.rbegin();
        for (; a1 != A1.rend() || a2 != A2.rend() || cnt; cnt /= 10) {
            if(a1 != A1.rend()) cnt += (*a1 - '0'), a1++;
            if(a2 != A2.rend()) cnt += (*a2 - '0'), a2++;
            ans += (char) ('0' + cnt % 10);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
