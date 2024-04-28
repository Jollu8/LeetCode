class Solution {
public:
    int countConsistentStrings(string t, vector<string>& w) {
        vector<bool> seen(26);
        for(auto i : t) seen[i-'a'] = true;

        int ans = 0;
        for(auto &v : w)
            ans += all_of(v.begin(), v.end(), [&](auto c){ return seen[c-'a']; });

        return ans;
    }
};