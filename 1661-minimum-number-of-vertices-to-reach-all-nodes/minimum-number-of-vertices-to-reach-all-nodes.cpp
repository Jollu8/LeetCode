

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        vector<bool> seen(n, false);
        for(auto &v : edges) seen[v[1]] = true;

        #pragma omp parallel for
        for(int i = 0; i < n; ++i) {
            if(!seen[i]) {
                #pragma omp critical
                ans.push_back(i);
            }
        }
        return ans;
    }
};
