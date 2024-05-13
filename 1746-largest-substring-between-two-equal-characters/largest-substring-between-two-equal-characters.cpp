class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); ++i) {
            if(mp.contains(s[i])) ans  = max(ans, i- mp[s[i]]);
            else mp[s[i]] = i+1;
        }
        return ans;
    }
};