///// @Jollu
// 748. Shortest Completing Word



#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string shortestCompletingWord(string lp, vector<string> &nums) {
        string l = "", ans = "aqwergawegafcfasdw";
        for (auto &i: lp)if (isalpha(i))l += tolower(i);
        for (auto &i: nums) {
            unordered_map<char, int> m;
            for (auto &j: i)m[j]++;
            int ct = 0;
            for (auto &i: l) {
                if (m.find(i) == m.end())break;
                ct++;
                m[i]--;
                if (!m[i])m.erase(i);
            }
            if (ct == l.size()) {
                if (ans.size() > i.size())ans = i;
            }

        }
        return ans;

    }
};

int main() {
    Solution s;
}