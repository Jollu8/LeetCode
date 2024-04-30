class Solution {
public:
    int commonFactors(int a, int b) {
        int n = (a <= b) ? a : b;
        int ans{};
        while(n > 0) {
            ans += (a%n==0 && b%n==0) ? 1 : 0;
            --n;
        }
        return ans;
    }
};