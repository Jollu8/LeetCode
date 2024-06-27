class Solution {
    vector<vector<int>> ans;
    vector<int> dp;
    vector<vector<int>> G;

    inline void bkg(int ind, int v) {
        cout << G.size();
        dp.push_back(ind);

        if (ind == v) {
            ans.push_back(dp);
            dp.pop_back();
            return;
        }

        for (auto i : G[ind]){
            bkg(i, v);
       
        }
        dp.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        G = move(graph);
        int n = G.size();
        bkg(0, n - 1);
        return ans;
    }
};