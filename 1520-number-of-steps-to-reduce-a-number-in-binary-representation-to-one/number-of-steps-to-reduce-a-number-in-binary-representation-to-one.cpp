class Solution {
public:
    int numSteps(string& s, int ans = 0, int c = 0) {
        int n = s.size() - 1;
        for (int i = n; i ; ans += s[i--] - '0' + c == 1 ? c = 1, 2 : 1);
        return ans + c;
    }
};