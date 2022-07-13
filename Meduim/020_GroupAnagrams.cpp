////@jollu

// 49. Group Anagrams
//Medium
//
//10303
//
//338
//
//Add to List
//
//Share
//Given an array of strings strs, group the anagrams together. You can return the answer in any order.
//
//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        if (strs.size() < 1)
            return {{""}};

        vector<vector<string>> v;
        unordered_map<string, vector<string>> mp;
        int i = 0;

        while (i < strs.size()) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
            i++;
        }

        for (auto it = mp.begin(); it != mp.end(); ++it)
            v.push_back(it->second);
        return v;

    }
};

int main() {
    Solution s;
    vector<string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    auto res = s.groupAnagrams(vec);
    for (auto i: res) {
        for (auto j: i) {
            cout << j << ",";
        }
    }

}