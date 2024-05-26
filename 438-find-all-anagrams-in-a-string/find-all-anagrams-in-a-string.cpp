class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> mp(26), ans;
        vector<int> buf = mp;
        for(auto c : p) mp[c-'a']++;

        for(int l = 0, r = 0; r < s.size(); ++r) {
            int i = s[r] - 'a';
            mp[i]--;
            for(; mp[i] < 0; mp[s[l++] - 'a']++);
            if(r- l + 1 == p.size())ans.push_back(l);
        }
        return ans;
    }
};