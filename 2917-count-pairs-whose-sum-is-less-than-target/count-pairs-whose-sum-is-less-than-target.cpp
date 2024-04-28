class Solution {
public:
    int countPairs(vector<int>& A, int t) {
        int ans{};
        for(int i = 0; i < A.size()-1; ++i) {
            for(int j = i+1; j < A.size() ; ++ j){
                if(A[i] + A[j] < t) ans++;
            }
        }
        return ans;
        
    }
};