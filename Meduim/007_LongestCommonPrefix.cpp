////@jollu

//14. Longest Common Prefix
//Write a function to find the longest common prefix string amongst an array of strings.
//
//If there is no common prefix, return an empty string "".
//
//
//
//Example 1:
//
//Input: strs = ["flower","flow","flight"]
//Output: "fl"
//Example 2:
//
//Input: strs = ["dog","racecar","car"]
//Output: ""
//Explanation: There is no common prefix among the input strings.



#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];
        sort(strs.begin(), strs.end());
        int en = min(strs[0].size(),
                     strs[strs.size() - 1].size());
        string first = strs[0], last = strs[strs.size() - 1];
        int i = 0;
        while (i < en && first[i] == last[i])
            i++;
        string pre = first.substr(0, i);
        return pre;
    }


};


int main() {
    Solution s1;
    vector<string> vec = {"flower", "flow", "flight"};
    cout << s1.longestCommonPrefix(vec);
}