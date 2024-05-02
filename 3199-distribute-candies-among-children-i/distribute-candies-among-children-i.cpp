class Solution {
public:
    int distributeCandies(int n, int t) {
        int ans{};
        for (int i = 0; i <= t; ++i)
            for (int j = 0; j <= t; ++j)
                for (int k = 0; k <= t; ++k)
                     ans += (i + j + k == n) ? 1 : 0;

        return ans;
    }
};