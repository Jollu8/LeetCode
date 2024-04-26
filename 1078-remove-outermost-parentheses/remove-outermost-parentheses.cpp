class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans{};
        int op{};

        for (auto c : s) {
            if (c == '(' && op++ > 0)
                ans += c;
            if (c == ')' && op-- > 1)
                ans += c;
        }
        return ans;
    }
};