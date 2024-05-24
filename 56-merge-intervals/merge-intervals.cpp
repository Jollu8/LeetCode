class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        sort(A.begin(), A.end());
        vector<vector<int>> ans;    
        ans.push_back(A[0]);

        for(int i{}; i < A.size(); ++i) {
            if(ans.back()[1] >= A[i][0]) ans.back()[1] = max(ans.back()[1], A[i][1]);
            else ans.push_back(A[i]);
        }
        return ans;     
    }
};