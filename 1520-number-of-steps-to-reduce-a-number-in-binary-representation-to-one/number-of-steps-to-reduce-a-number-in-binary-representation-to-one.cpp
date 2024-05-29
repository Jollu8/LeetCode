class Solution {
public:
    int numSteps(string& s, int ans = 0, int c = 0) {

        for (auto i = s.size() - 1; i > 0; ans += (s[i--] - '0' + c == 1) ? c = 1, 2 : 1);
        return ans + c;
    }
};