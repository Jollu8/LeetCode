class Solution {
public:
    int reverse(int x) {
        long int ans{};
        while(x != 0) {
            auto tmp = x%10;
            ans = ans * 10 + tmp;
            x /= 10;
        }
        if(ans > INT_MAX || ans < INT_MIN) return 0;
        return ans;
        
    }
};