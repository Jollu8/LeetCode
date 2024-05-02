class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool>buf(26);
        for(auto c: s)buf[c-'a'] =true;
        return count(buf.begin(), buf.end(), true); 
    }
};