class Solution {
public:
    vector<int> findPeaks(vector<int>& A) {
        vector<int> ans;
        for(int i = 1; i < A.size()-1; ++i) {
            if(A[i] > A[i-1] && A[i] > A[i+1] )
            ans.push_back(i);
        }
        return ans;

    }
};