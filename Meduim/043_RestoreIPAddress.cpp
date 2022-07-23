///// @Jollu
// Restore IP Addresses

#include <vector>
#include <string>
#include <iostream>

using namespace std;


class Solution {
public:
    vector<string> v;

    void check(string s, string ans, int len, int index) {
        if (s.length() == index && len == 0) {
            ans.pop_back();
            v.push_back(ans);
            return;
        }

        if (len == 0 || (s.length() - index) > len * 3) {
            return;
        }

        if (s[index] == '0') {
            check(s, ans + s[index] + ".", len - 1, index + 1);
            return;
        }

        int c = index + 2;
        if (c > s.length() - 1) {
            c = s.length() - 1;
        }

        string x = "";
        for (int i = index; i <= c; i++) {
            x += s[i];
            if (x.length() == 3 && x > "255") {
                break;
            }

            check(s, ans + x + ".", len - 1, i + 1);
        }
    }

    vector<string> restoreIpAddresses(const string& s) {

        if (s.length() > 12) {
            return v;
        }

        check(s, "", 4, 0);
        return v;
    }
};

int main()  {
    Solution s;
    auto res = s.restoreIpAddresses("25525511135");
    for(auto i : res) {
        cout << i << ", ";
    }
}