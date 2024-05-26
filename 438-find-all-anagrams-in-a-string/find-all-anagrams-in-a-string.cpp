class Solution {
public:
    vector<int> findAnagrams(string &s, string &p) {
        vector<int> dp(26), ans;
        for(auto c : p)dp[c-'a']++;

        for(int l{}, r{}; r < s.size(); ++r) {
            int i = s[r] - 'a';
            dp[i]--;
            for(;dp[i] < 0; dp[s[l++] - 'a']++);
            if(r - l + 1 == p.size())ans.push_back(l);
        }
        return ans;
    }
};