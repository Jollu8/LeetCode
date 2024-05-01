class Solution {
public:
    vector<int> targetIndices(vector<int>& A, int t) {
        sort(A.begin(), A.end());
        vector<int> ans;
        for(int i = 0; i < A.size(); ++i) {
            if(A[i] == t) ans.push_back(i);
        }
        return ans;
    }
};