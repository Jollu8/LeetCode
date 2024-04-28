class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& A) {
        int ans{}, n = A.size();
        for(int i = 0; i < n; ++i) {
            ans += ((i + 1) * (n-i) + 1) / 2 *A[i];
        }
        return ans;
    }
};