#define ll long long
class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        ll ans = 0;
        while(i < j){
            if(s[j] == '1'){
                j--;
            }
            else if(s[i] == '0'){
                i++;
            }
            else{
                ans += 1LL*(j-i);
                i++;
                j--;
            }
        }
        return ans;
    }
};
