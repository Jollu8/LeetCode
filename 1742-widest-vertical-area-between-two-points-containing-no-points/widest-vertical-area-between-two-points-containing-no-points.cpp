class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& A) {
        sort(A.begin(), A.end());
        int ans{};
        for(int i = 1; i < A.size(); ++i) {
            ans = max(A[i][0]- A[i-1][0], ans);
        }
        return ans;
        
    }
};