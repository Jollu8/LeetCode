class Solution {
public:
    void moveZeroes(vector<int> &A) {
        for(int s{}, f{}; f < A.size(); f = (A[f] ? swap(A[s++], A[f]), f+1 : f+1));
      
    }
};
