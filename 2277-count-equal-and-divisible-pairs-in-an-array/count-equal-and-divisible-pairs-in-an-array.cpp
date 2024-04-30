class Solution {
public:
    int countPairs(vector<int>& A, int k) {
        int ans{};
        for(int i = 0; i < A.size()-1; ++i)
            for(int j = i+1; j < A.size(); ++j)
                ans += (A[i] == A[j] && i*j %k == 0) ? 1 : 0;
        
        return ans;
    }
};