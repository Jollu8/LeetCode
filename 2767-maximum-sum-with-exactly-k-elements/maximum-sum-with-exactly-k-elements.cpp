class Solution {
public:
    int maximizeSum(vector<int>& A, int k) {
        int f = *max_element(A.begin(), A.end());
        int ans{};
        while(k--){
            ans+= f;
            ++f;
        }
        return ans;
    }
};