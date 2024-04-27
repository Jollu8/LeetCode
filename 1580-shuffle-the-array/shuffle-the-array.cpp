class Solution {
public:
    vector<int> shuffle(vector<int>& A, int n) {
        vector<int> ans;
        for(int i = 0; i < n; ++i) {
            for(int j = i; j < A.size(); j += n) {
                ans.push_back(A[j]);
            }
        }
        return ans;
    }
};