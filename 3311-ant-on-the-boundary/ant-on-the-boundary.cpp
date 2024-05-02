class Solution {
public:
    int returnToBoundaryCount(vector<int>& A) {
    partial_sum(A.begin(), A.end(), A.begin());
    return count(A.begin(), A.end(), 0);
        
    }
};