class Solution {
public:
    int maxProduct(vector<int>& A) {
        int ans{};
        for(int i = 0 ; i < A.size(); ++i) {
            for(int j = 0; j < A.size(); ++j){
            if(i == j) continue;
            ans = max(ans, ((A[i]-1) * (A[j]-1)));
            }
        }
        return ans;
    }
};