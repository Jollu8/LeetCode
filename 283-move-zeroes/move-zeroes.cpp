class Solution {
public:
    void moveZeroes(vector<int>& A, int l = 0, int r = 0) {
        for(; r < A.size(); r += (A[r]) ? swap(A[l++], A[r]), 1 : 1);
    }
};
