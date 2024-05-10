class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_set<char> used;
        for(int i=0; i<s.size(); i++){
            if (!m.contains(s[i])){
                if (used.count(t[i])==1)
                    return false;
                m[s[i]] = t[i];
                used.insert(t[i]);
            }else if(m[s[i]]!=t[i])return false;
        }
        return true;
    }
};