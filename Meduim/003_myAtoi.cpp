//Example 1:
//
//Input: s = "42"
//Output: 42
//Explanation: The underlined characters are what is read in, the caret is the current reader position.
//Step 1: "42" (no characters read because there is no leading whitespace)
//^
//Step 2: "42" (no characters read because there is neither a '-' nor '+')
//^
//Step 3: "42" ("42" is read in)
//^
//The parsed integer is 42.
//Since 42 is in the range [-231, 231 - 1], the final result is 42.

#include <string>
#include <sstream>
#include <iostream>

using namespace std;



#include <stdlib.h>
class Solution {
public:
    int  myAtoi(string &s) {
        if(isalpha(s[0])) return 0;

        int i = 0;

        stringstream ss(s);

        ss >> i;

        return i;
    }
};


int main() {
    Solution s1;
    string str = "-91283472332";
    cout << s1.myAtoi(str);
}