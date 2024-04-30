class Solution {
public:
    int minOperations(vector<int>& A) {
        int ans{};
        for(int i = 1; i < A.size(); ++i) {
            if(A[i]  <= A[i-1])  {
                int cur =  A[i-1] +1 - A[i];
                A[i] = A[i] + cur;
                ans += cur;
            }
        }
        return ans;
    }
};