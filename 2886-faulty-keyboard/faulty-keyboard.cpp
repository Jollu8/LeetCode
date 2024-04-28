class Solution {
public:
    string finalString(string s) {
        string a,b;
        for(auto c : s) {
            if(c == 'i') swap(a,b);
            else a += c;
        }
        return string(b.rbegin(), b.rend()) + a;
        
    }
};