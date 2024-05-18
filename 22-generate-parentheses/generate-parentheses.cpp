class Solution {    
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        function<void(int, int, string)> func = [&](int l, int r, string s) {
            if(s.size() == n *2) ans.emplace_back(s);
            if(l < n) func(l+1, r, s + "(");
            if(r < l) func(l, r+1, s + ")");
        };
        func(0, 0, "");
        return ans;
     }
};