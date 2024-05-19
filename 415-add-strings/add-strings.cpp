class Solution {
public:
    string addStrings(string A1, string A2) {
        [&]() {
            int n = A1.size(), m = A2.size();
            if (n > m)
                A2 = string(n - m, '0') + A2;
            else if (m > n)
                A1 = string(m - n, '0') + A1;
        }();
        string ans;
        int cnt{};
        ans.reserve(A1.size() + 2);
        for (int i = A1.size() - 1; i >= 0; --i) {
            cnt += (A1[i] - '0');
            cnt += (A2[i] - '0');
            ans = (char)('0' + cnt % 10) + ans;
            cnt /= 10;
        }
        if (cnt)
            ans = (char)('0' + cnt) + ans;
        return ans;
    }
};