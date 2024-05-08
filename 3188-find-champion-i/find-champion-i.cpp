class Solution {
public:
    int findChampion(vector<vector<int>>& g) {
        int ans{};
        int cnt{};
        for(int i = 0; i < g.size(); ++i) {
            int a = accumulate(g[i].begin(), g[i].end(),  0);
            if(a > cnt) {
                ans = i;
                cnt = a;
            }

        }
        return ans;
    }
};