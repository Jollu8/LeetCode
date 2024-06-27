class Solution {
public:
    int findCenter(vector<vector<int>>& G) {
        int x = x = G[0][0];
        return x == G[1][0] || x == G[1][1] ? x : G[0][1]; 
    }
};