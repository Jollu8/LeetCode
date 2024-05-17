class Solution {
public:
    vector<int> productExceptSelf(vector<int>& A) {
        int n = A.size(), r = 1;
        vector<int> ans(n);
        ans[0] = 1;
        
        for(int i = 1; i < n; ++i) ans[i] = ans[i-1] * A[i-1];
        for(int i = n-1; i >= 0; --i) {
            ans[i] = ans[i] * r;
            r *= A[i];
        }
        return ans;

    }
};