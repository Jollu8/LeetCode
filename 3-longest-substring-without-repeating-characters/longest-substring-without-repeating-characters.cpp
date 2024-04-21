class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans{};
        unordered_set<char> seen;
        for (int l = 0, r = 0; r < s.size(); ++r) {
            while(seen.contains(s[r]))
                seen.erase(s[l++]);
            seen.insert(s[r]);
            ans = max(ans, r-l+1);
       
        }
        return ans;
    }
};