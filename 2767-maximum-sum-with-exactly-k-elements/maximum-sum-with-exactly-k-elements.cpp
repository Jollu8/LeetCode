class Solution {
public:
    int maximizeSum(vector<int>& A, int k) {
        int f = *max_element(A.begin(), A.end());
        return k * f + k *(k-1)/2;
    }
};