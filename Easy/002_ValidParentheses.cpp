
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        int length = s.size();

        for (auto i = 0; i < length; ++i) {
            char ch = s[i];
            if (ch == '{' || ch == '(' || ch == '[') res.push(ch);
            else {
                if (res.empty()) return false;

                char top = res.top();
                res.pop();

                if (ch == '}' && top != '{' ||
                    ch == ')' && top != '(' ||
                    ch == ']' && top != '[')
                    return false;
            }
        }
        return res.empty();
    }
};

int main() {
    Solution solution;
    std::cout << solution.isValid("(])");
}