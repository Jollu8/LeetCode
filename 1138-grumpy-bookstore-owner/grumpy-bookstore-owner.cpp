class Solution {
public:
    int maxSatisfied(vector<int>& A, vector<int>& B, int m) {
        int ans{};
        for(int i = 0; i < A.size(); ++i)
            if(B[i] == 0) ans+= A[i];
        int cur{};
        for(int i = 0; i < m; ++i)
            if(B[i]) cur += A[i]; 
        int tmp = cur;
        for(int j = m, i{}; j < A.size(); ++i, j++) {
            if(B[i]) cur -= A[i];
            if(B[j]) cur+= A[j];
            tmp = max(cur, tmp);
           
        }
        return ans +tmp;
            
    }
};