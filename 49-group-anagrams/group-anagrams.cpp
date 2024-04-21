class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &s) {
        unordered_map<string, vector<string>> mp;
        for (auto &w: s) {
            auto tmp = w;
            sort(w.begin(), w.end());
            mp[w].emplace_back(tmp);
        }
        vector<vector<string>> ans;
        ans.reserve(mp.size());
        for (auto &a: mp) ans.emplace_back(a.second);
        sort(ans.begin(), ans.end());
        return ans;

    }
};