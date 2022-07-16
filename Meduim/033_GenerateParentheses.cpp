///// @Jollu
// 22. Generate Parentheses



#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>


using namespace std;

class Solution {
public:
    bool isValid(string &s) {
        int opened = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(')
                opened++;
            else if(s[i] == ')')
                opened--;

            if(opened < 0) return false;
        }

        return (opened == 0);
    }

    void solve(int N, string &curr, vector<string> &res) {
        if(N == 0) {
            if(isValid(curr)) res.push_back(curr);

            return;
        }

        curr[N-1] = ')';
        solve(N-1, curr, res);

        curr[N-1] = '(';
        solve(N-1, curr, res);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr = "";

        for(int i = 0; i < 2 * n; i++)
            curr.push_back('.');

        // Now, u can replace this '.' with two options
        solve(curr.length(), curr, res);
        return res;
    }
};

int main() {
    Solution s;
    std::string str("23");
//    vector<string> res{"((()))","(()())","(())()","()(())","()()()"};
    auto res1 = s.generateParenthesis(3);
    for(auto i : res1) {
        cout << i << ",";
    }

}