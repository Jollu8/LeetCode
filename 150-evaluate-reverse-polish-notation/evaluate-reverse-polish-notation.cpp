#define S size()
#define PB push_back

class Solution {
    static int calc(int b, int a, const char op) {
        switch (op) {
            case '+': return b + a;
            case '-': return b - a;
            case '*': return b * a;
        }
        return b / a;
    }
public:
    int evalRPN(vector<string> &t) {
        vector<int> st;
        for (auto i: t) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int result = calc(st[st.S - 2], st[st.S - 1], i.back());
                st.resize(st.S - 2);
                st.PB(result);
            } else st.PB(stoi(i));
        }
        return st.back();
    }
};
