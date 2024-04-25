class Solution {
    int maskSum( vector<int>& A, int mask) {
        int sum {};
        int n = A.size();
        for (int j = 0; j < n; ++j)
            if (mask & (1 << j)) sum += A[j];
        return sum;
    }
public:
    

    int distributeCookies(vector<int>& A, int k, int currentPerson = 0, int currentMask = 0) {
        vector<vector<int>>dp(7, vector<int>(255));
        int numCookies = A.size();
        int limitMask = (1 << numCookies) - 1;
        if (currentPerson == k - 1) {
            return maskSum(A, limitMask - currentMask);
        }
        if (dp[currentPerson][currentMask] == 0) {
            dp[currentPerson][currentMask] = INT_MAX;
            for (int mask_i = 1; mask_i < limitMask; ++mask_i) {
                if ((mask_i & currentMask) == 0 && bitset<7>(limitMask - mask_i - currentMask).count() >= k - currentPerson - 1) {
                    int nextPersonMask = currentMask + mask_i;
                    int currentMaskSum = maskSum(A, mask_i);
                    dp[currentPerson][currentMask] = min(dp[currentPerson][currentMask],
                                                         max(distributeCookies(A, k, currentPerson + 1, nextPersonMask), currentMaskSum));
                }
            }
        }
        return dp[currentPerson][currentMask];
    }

};