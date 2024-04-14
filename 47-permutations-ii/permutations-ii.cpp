class Solution {
    vector<vector<int>> ans;
    void backtrack(vector<int>&vec, int n) {
        if(n== vec.size()-1){
            ans.emplace_back(vec);
        return;
        }

        unordered_set<int> seen;

        for(int i = n; i < vec.size(); ++i) {
            if(!seen.contains(vec[i])){
            swap(vec[i], vec[n]);
            backtrack(vec, n+1);
            swap(vec[i], vec[n]);
            seen.insert(vec[i]);
            }
        }

    }
public:
    vector<vector<int>> permuteUnique(vector<int>& vec) {
        backtrack(vec, 0);
        return ans;
    }
};