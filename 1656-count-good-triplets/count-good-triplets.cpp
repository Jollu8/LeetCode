class Solution {
public:
    int countGoodTriplets(vector<int>& A, int a, int b, int c) {
        int ans{};

        for (int i = 0; i < A.size() - 2; ++i) {
            for (int j = i + 1; j < A.size() - 1; ++j) {
                for (int k = j + 1; k < A.size(); ++k) {
                    ans = (abs(A[i] - A[j]) <= a && abs(A[j] - A[k]) <= b &&  abs(A[i] - A[k]) <= c)
                               ? ans+1
                               : ans;
                }
            }
        }
        return ans;
    }
};