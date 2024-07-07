class Solution {
public:
    int numWaterBottles(int bottl, int ex) {
        int ans = bottl;

        while (bottl >= ex) {
            int m = bottl % ex;
            bottl -= m;
            ans += bottl / ex;
            bottl /= ex;
            bottl += m;
        }
        return ans;
    }
};