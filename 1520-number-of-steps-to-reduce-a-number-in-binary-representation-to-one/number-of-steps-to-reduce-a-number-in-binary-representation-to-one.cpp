class Solution {
public:
    int numSteps(string& s, int ans = 0, bool c = false) {
        int n = s.size() - 1;
        for (int i = n; i ; ans += s[i--] - '0' ^ c ? c = 1, 2 : 1);
        return ans + c;
    }
};