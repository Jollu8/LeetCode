class Solution {
public:
    string removeTrailingZeros(string S) {
        int cnt{}, n = S.size();
        for(int i = n-1; i >= 0; --i){
            if(S[i] == '0')++cnt;
            else break;
        }
        return S.substr(0, n-cnt);
    }
};