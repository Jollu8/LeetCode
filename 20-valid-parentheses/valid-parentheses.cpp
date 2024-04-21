class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{')
                st.push(c);
            else {
                if (st.empty())
                    return false;
                auto t = st.top();
                st.pop();
                if (
                    c == ']' && t != '[' ||
                    c == ')' && t != '(' ||
                    c == '}' && t != '{'
                ) return false;
            }
        }
        return st.empty();
    }
};