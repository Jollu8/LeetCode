//Given a string s, find the length of the longest substring without repeating characters.
//
//
//
//Example 1:
//
//Input: s = "abcabcbb"
//Output: 3
//Explanation: The answer is "abc", with the length of 3.



#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:

    int lengthOfLongestSubstring(string s) {

        int i;
        int n = s.length();

        int st = 0;
        int currlen;

        int maxlen = 0;

        int start;

        unordered_map<char, int> pos;

        pos[s[0]] = 0;

        for (i = 1; i < n; i++) {

            if (pos.find(s[i]) == pos.end())
                pos[s[i]] = i;

            else {

                if (pos[s[i]] >= st) {

                    currlen = i - st;
                    if (maxlen < currlen) {
                        maxlen = currlen;
                        start = st;
                    }

                    st = pos[s[i]] + 1;
                }

                pos[s[i]] = i;
            }
        }

        if (maxlen < i - st) {
            maxlen = i - st;
            start = st;
        }


        auto res = s.substr(start, maxlen);
        return res.size();
    }
};
