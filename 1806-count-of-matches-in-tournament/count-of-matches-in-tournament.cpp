class Solution {
public:
    int numberOfMatches(int n) {
        int ans{};
        while(n > 1) {
            ans += (n/2);
            if(n > 2 && n&1)++n;
            std::cout << n/2 << ' ';
            
            n/=2;
        }
        return ans;
        
    }
};