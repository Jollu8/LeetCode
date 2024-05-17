class Solution {
public:
    int evalRPN(vector<string>& S) {
        unordered_map<char, function<int(int, int)>> func {
            {'+', [](int a, int b){return a + b;}},
            {'-', [](int a, int b){return a - b;}},
            {'*', [](int a, int b){return a * b;}},
            {'/', [](int a, int b){return a / b;}}
        };
        stack<int>st;

        for(auto &c : S) {
            if(!isdigit(c.back())){
                auto b = st.top(); st.pop();
                auto a = st.top(); st.pop();
                st.push(func[c.back()](a, b));
            }else st.push(stoi(c));
        }
        return st.top();
    }
};