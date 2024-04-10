class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string ,vector<string>> mp;
        for(auto &i : s){
            auto tmp = i;
            sort(i.begin(), i.end());
            mp[i].emplace_back(tmp);

        }
        vector<vector<string>> ans;
        for(auto &[a, b] : mp){
            ans.emplace_back(b);
        }
        return ans;
        
    }
};