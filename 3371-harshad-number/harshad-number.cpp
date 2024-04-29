class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans{};
        int n = x;
        while(n > 0) {
            ans += n %10;
            n /= 10;
        }
        if(x/ans*ans == x) return ans;
        return -1;

    }
};