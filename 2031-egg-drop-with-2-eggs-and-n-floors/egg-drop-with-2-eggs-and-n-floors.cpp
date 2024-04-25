class Solution {
public:
    int twoEggDrop(int n) {
        int ans =1;
        while(n - ans > 0) n -= ans++;
        return ans;
    }
};