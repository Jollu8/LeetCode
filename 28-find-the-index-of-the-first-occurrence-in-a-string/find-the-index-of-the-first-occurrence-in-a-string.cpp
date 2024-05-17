class Solution {
public:
    int strStr(string h, string n) {        
        if(auto f = h.find(n); f != string::npos) return f;
        return -1;
    }
};