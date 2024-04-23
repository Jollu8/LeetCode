class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& rich, vector<int>& quiet) {
        int n = quiet.size();
        vector<vector<int>> g(n);
        vector<int> state(n, 0);
        vector<int> ans(n);
        iota(ans.begin(), ans.end(), 0);
        queue<int> q;

        for (auto& e : rich) {
            g[e[0]].push_back(e[1]);
            state[e[1]]++;
        }
        for (int i = 0; i < n; ++i) {
            if (state[i] == 0)
                q.push(i);
        }

        while(!q.empty()) {
            auto cur = q.front();
            q.pop();
            for(auto i : g[cur]) {
                if(quiet[ans[i]] > quiet[ans[cur]]) ans[i] = ans[cur];
                if(!--state[i]) q.push(i);
            }
        }
        return ans;
    }
};