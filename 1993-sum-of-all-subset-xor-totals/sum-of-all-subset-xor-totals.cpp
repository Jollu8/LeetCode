class Solution {
    int ans;
    void backtrack(vector<int> &A, int i , int x){
        if(i >= A.size()) {
            ans += x;
            return;
        }
        backtrack(A, i+1, x^A[i]);
        backtrack(A, i+1, x);

    }
public:
    int subsetXORSum(vector<int>& A) {
        ans = 0;
        backtrack(A, 0,0);
        return ans;
    }
};