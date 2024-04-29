class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i = 0, b = false; i < s.size()&& !b; ++i) {
            if(s[i] == '6'){
                s[i] = '9';
                b= true;
            }
        }
        return stoi(s);
    }
};