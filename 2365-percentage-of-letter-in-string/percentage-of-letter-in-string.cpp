class Solution {
public:
    int percentageLetter(string s, char t) {
        int n = count(s.begin(), s.end(), t);
        return n/(double)s.size()* 100 ;
    }
};