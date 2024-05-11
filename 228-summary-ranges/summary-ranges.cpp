class Solution {
public:
    vector<string> summaryRanges(vector<int>& A) {
        vector<string> ans;
        for(int l = 0, r = 0; r < A.size(); ++r) {
            if(r+1 == A.size() || A[r]+1 != A[r+1]){
                ans.emplace_back(l != r ? to_string(A[l]) + "->" + to_string(A[r]) : to_string(A[r]));
                l = r+1;
            }
        }
        return ans;
    }
};