class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {

        string s1, s2;
        for(auto &v : w1) s1 += v;
        for(auto &v: w2) s2 += v;

        return s1 == s2;
        
    }
};