class Solution {
public:
    int maxProduct(vector<int>& A) {
        int ans{};
        for(int i = 0 ; i < A.size()-1; ++i) {
            for(int j = i+1; j < A.size(); ++j){
            ans = max(ans, ((A[i]-1) * (A[j]-1)));
            }
        }
        return ans;
    }
};