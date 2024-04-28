class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum{}, p = 1;
        while(n > 0) {
            sum += n%10;
            p *= n%10;
            n /= 10;
        }
        return p - sum;
        
    }
};