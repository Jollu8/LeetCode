class Solution {
public:
    int countConsistentStrings(string t, vector<string>& w) {
        vector<bool> seen(26, false);
        for(auto i : t) seen[i-'a'] = true;

        int ans{};
        for(auto &v : w) {
            int cnt{};
            for(auto i : v) {
                if(seen.at(i-'a'))++cnt;
                else break;
            }
            if(cnt == v.size())++ans;
        }
        return ans;
        
    }
};