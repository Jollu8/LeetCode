class Solution {
public:
    bool validPalindrome(string s, int l1 = 0, int r1 = 0, int r2 = 0,  int l2 = 0) {
        
       for(int l = 0, r = s.size()-1, cnt = 1; l < r;++l, --r) {
        
           if(s[l] != s[r]) {
               for(l1 = l, r1 = r-1; l1 < r1 && s[l1] == s[r1]; ++l1, --r1);
               for(l2 = l+1, r2 = r; l2 < r2 && s[l2] == s[r2]; ++l2, --r2);
               return l2 >= r2 or l1 >= r1;
            }
        }
        return true; 
    }
};
