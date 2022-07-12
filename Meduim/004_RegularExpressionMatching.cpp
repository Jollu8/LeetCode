//10. Regular Expression Matching
//        Hard

//Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:
//
//'.' Matches any single character.​​​​
//'*' Matches zero or more of the preceding element.
//The matching should cover the entire input string (not partial).
//
//
//
//Example 1:
//
//Input: s = "aa", p = "a"
//Output: false
//Explanation: "a" does not match the entire string "aa".
//Example 2:
//
//Input: s = "aa", p = "a*"
//Output: true
//Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

#include <string>
#include <sstream>
#include <iostream>
#include <regex>

using namespace std;



class Solution {
public:
    bool isMatch(string s, string p) {
            return regex_match(s,regex(p));

    }
};


int main() {
    Solution s1;
    string str1  = "aa";
    string str2 = "a*";
    cout  << s1.isMatch(str1, str2);
}