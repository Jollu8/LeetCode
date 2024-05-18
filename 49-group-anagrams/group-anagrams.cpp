class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &s) {
        unordered_map<string, int> mp;
        vector<vector<string>> ans(s.size());
        int index{};
        for (auto &w: s) {
            auto tmp = w;
            sort(w.begin(), w.end());
            if (auto f = mp.find(w); f != mp.end())
                ans[f->second].emplace_back(tmp);
            else ans[mp[w] = index++].emplace_back(tmp);
        }
        ans.resize(index);
        return ans;
    }
};