class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(auto c : s) mp[c]++;
        int eq = mp[s[0]];

        for(auto [a, b] : mp) if(b != eq) return false;
        return true;
    }
};