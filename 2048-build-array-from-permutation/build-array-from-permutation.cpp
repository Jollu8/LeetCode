class Solution {
public:
    vector<int> buildArray(vector<int>& A) {
        vector<int> ans(A.size());
        for(auto i = 0; i < A.size(); ++i) {
            ans[i] = A[A[i]];
        }
      
        return ans;
        
    }
};