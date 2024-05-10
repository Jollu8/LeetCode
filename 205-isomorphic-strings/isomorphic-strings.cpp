class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ma, mb;
        for(int i = 0; i < s.size(); ++i) {
            if(ma[s[i]] && ma[s[i]] != t[i]) return false;
            if(mb[t[i]] && mb[t[i]] != s[i]) return false;
            ma[s[i]] = t[i];
            mb[t[i]] = s[i];
        }
        return true;
    }
};