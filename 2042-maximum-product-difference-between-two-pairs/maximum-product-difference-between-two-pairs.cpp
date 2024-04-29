class Solution {
public:
    int maxProductDifference(vector<int>& A) {
        sort(A.begin(), A.end());
        int n = A.size()-1;
        return (A[n]*A[n-1]) - (A[0] *A[1]);
    }
};