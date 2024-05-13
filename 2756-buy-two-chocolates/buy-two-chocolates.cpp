class Solution {
public:
    int buyChoco(vector<int>& A, int t) {
        nth_element(A.begin(), A.begin()+1, A.end());
        int ans = t - A[0] - A[1];
        return ans >= 0? ans : t;
    }
};