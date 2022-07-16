///// @Jollu
// 17. Letter Combinations of a Phone Number



#include <vector>
#include <algorithm>
#include <map>
#include <cassert>


using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> table;
        table['2'] = "abc";
        table['3'] = "def";
        table['4'] = "ghi";
        table['5'] = "jkl";
        table['6'] = "mno";
        table['7'] = "pqrs";
        table['8'] = "tuv";
        table['9'] = "wxyz";

        vector<string> res;
        for (int i = digits.length() - 1; i >= 0; --i) {
            char temp = digits.at(i);
            if ('2' <= temp && '9' >= temp) {
                if (i == digits.length() - 1) {
                    string inner = table[temp];
                    for (int j = 0; j < inner.length(); ++j) {
                        res.push_back(string(1, inner[j]));
                    }
                } else {
                    string inner = table[temp];
                    vector<string> current(res.begin(), res.end());
                    res.clear();
                    for (int j = 0; j < inner.length(); ++j) {
                        for (string str: current) {
                            res.push_back(inner[j] + str);
                        }
                    }
                }
            }
        }

        return res;

    }
};

int main() {
    Solution s;
    std::string str("23");
    vector<string> res{"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    assert(s.letterCombinations(str) == res);
}