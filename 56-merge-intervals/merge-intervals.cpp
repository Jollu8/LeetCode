class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        sort(A.begin(), A.end());
        vector<vector<int>>ans {A[0]};
        int n = A.size();
        
        for(int i = 1, x = 0; i < n; ++i) {
            if(ans.back()[1] >= A[i][0]) ans.back()[1] = max(ans.back()[1], A[i].back());
            else ans.push_back(A[i]);
        }
        return ans;
     }
};