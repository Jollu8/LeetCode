class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& G) {
        vector<int> deg(n); 
        for (const auto& edge : G) {
            deg[edge[0]]++;
            deg[edge[1]]++;
        }

        sort(deg.begin(), deg.end());

        long long importance = 0;
        for (int i = 0; i < n; ++i) {
            importance += static_cast<long long>(deg[i]) * (i + 1); 
        }

        return importance;
    }
};