class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans{};
        for(int i = 0 ;i < n; ++i) {
            ans = max(ans, dfs(i, manager, informTime));
        }
        return ans;
     }

     int dfs(int i , vector<int> &a, vector<int> &b) {
        if(a[i] != -1) {
            b[i] += dfs(a[i], a, b);
            a[i] = -1;
        }
        return b[i];
     }
};