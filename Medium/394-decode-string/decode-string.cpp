class Solution {
public:
    string decodeString(string s) {
        string ans;
        stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ']') {
                st.push(s[i]);
            } else {
                std::vector<pair<int, string>> buf;
                string str = "", dg = "";
                while (!st.empty() && isalpha(st.top())) {
                    str = st.top() + str;
                    st.pop();
                }
                st.pop(); // remove the '['
                while (!st.empty() && isdigit(st.top())) {
                    dg = st.top() + dg;
                    st.pop();
                }
                int x = std::stoi(dg);
                buf.emplace_back(x, std::move(str));
                std::string tmp;
                for (const auto &p: buf) {
                    for(auto _ = 0; _ < p.first; ++_) tmp += p.second;
                }
                for (char c : tmp) st.push(c);
            }
        }
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};