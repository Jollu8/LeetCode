class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& w, vector<int>& g) {
        vector<string> ans;
        ans.push_back(w[0]);
        for(int i = 1; i < w.size(); ++i) {
            if(g[i-1] != g[i])ans.push_back(w[i]);
        }
        return ans;
    }
};