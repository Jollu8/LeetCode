///// @Jollu
// 541. Reverse String III



#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    string reverseWords(string &s) {
        stringstream ss(s);
        s = {};
        while (ss) {
            string str;
            ss >> str;

            reverse(str.begin(), str.end());
            s +=str + " ";
        }
        s.pop_back();
        return s;
    }
};

int main() {
    Solution s;
    string str = "Let's take LeetCode contest";
    cout << s.reverseWords(str);



}