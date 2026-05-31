class Solution {
public:
    string removeKdigits(string num, int k) {
        std::stack<char> mstack;
        
        for (char ch: num) {
            while(not mstack.empty() and k > 0 and mstack.top() > ch) {
                mstack.pop();
                --k;
            }
            mstack.push(ch);
         }


        while (k > 0 and not mstack.empty()) {
            mstack.pop();
            --k;
        }

        std::string ans;
        ans.reserve(mstack.size());

        while(not mstack.empty()) {
            ans += mstack.top();
            mstack.pop();
        }

        std::reverse(ans.begin(), ans.end());
        auto npos = ans.find_first_not_of("0");
        return npos == std::string::npos ? "0" : ans.substr(npos);
    }
};