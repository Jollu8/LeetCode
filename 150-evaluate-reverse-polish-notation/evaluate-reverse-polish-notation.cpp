#define S size()
#define PB push_back

class Solution {
public:
    int evalRPN(vector<string>& t) {
        vector<int> st;
        unordered_map<char, function<int(int, int)>> ops {
                {'+', [](int a, int b) { return a + b; }},
                {'-', [](int a, int b) { return a - b; }},
                {'*', [](int a, int b) { return a * b; }},
                {'/', [](int a, int b) { return a / b; }}
        };
        for (auto i : t) {
            if (ops.count(i.back())) {
                int a = st.back(); st.pop_back();
                int b = st.back(); st.pop_back();
                st.PB(ops[i.back()](b, a));
            } else {
                st.PB(stoi(i));
            }
        }
        return st.back();
    }
};