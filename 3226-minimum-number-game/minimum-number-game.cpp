class Solution {
public:
    vector<int> numberGame(vector<int>& A) {
        sort(A.begin(), A.end());
        for(int i = 0 ; i < A.size(); i +=2) {
            swap(A[i], A[i+1]);
        }
        return A;
    }
};