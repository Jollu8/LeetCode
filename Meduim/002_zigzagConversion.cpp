//Example 1:
//
//Input: s = "PAYPALISHIRING", numRows = 3
//Output: "PAHNAPLSIIGYIR"
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        int n = s.length();

        string a[numRows];

        int row = 0;
        bool down;

        for (int i = 0; i < n; ++i) {

            a[row].push_back(s[i]);

            if (row == numRows - 1)
                down = false;

            else if (row == 0)
                down = true;

            (down) ? (row++) : (row--);
        }

        string str;
        for (auto i: a) {
            str += i;
        }
        return str;

    }
};

int main() {
    Solution s;
    cout << s.convert(string("PAYPALISHIRING"), 3);
}