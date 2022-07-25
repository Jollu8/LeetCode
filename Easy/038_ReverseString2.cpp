///// @Jollu
// 541. Reverse String II



#include <string>
#include <vector>

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        string st;
        if (k == 1)
            return s;
        int len = s.length(), i, f = 1;
        string temp;
        for (i = 0; i < len; i += k) {
            if (f % 2 != 0) {
                temp = s.substr(i, k);
                reverse(temp.begin(), temp.end());
                st += temp;
            } else {
                temp = s.substr(i, k);
                st += temp;
            }
            f++;
        }

        return st;
    }

};

int main() {
    Solution s;
    string str = "abcdefg";
    cout << s.reverseStr(str, 2);


}