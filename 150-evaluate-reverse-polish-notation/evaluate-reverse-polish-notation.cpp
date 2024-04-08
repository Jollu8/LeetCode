#define S size()
#define PB push_back

class Solution {

    const std::unordered_map<char, std::function<int(int, int)>> ops{
        {'+', std::plus<>()},
        {'-', std::minus<>()},
        {'*', std::multiplies<>()},
        {'/', std::divides<>()}};

public:
    int evalRPN(vector<string>& t) {
        vector<int> st;
        for (auto i : t) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int result = ops.at(i.back())(st[st.S - 2], st[st.S - 1]);
                st.resize(st.S - 2);
                st.PB(result);
            } else
                st.PB(stoi(i));
        }
        return st.back();
    }
};
