class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> seen;
        for(auto i = 0; i < mat.size(); ++i) {
            auto p = accumulate(mat[i].begin(), mat[i].end(), 0);
            seen.insert({p, i});
        }
        vector<int> ans;
        for(auto it = seen.begin(); k > 0; ++it, --k) ans.push_back(it->second);
        return ans;
    }
};