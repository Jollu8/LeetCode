class Solution {
    vector<vector<string>> ans;

    int n;
    string s;
     bool is_valid(int i, int j) {

        for(; i < j; ++i, --j){
            if (s[i] != s[j])
                return false;
        }
        return true;
    }

     void dfs(int i, vector<string>& dp) {
        if (i == n)
            ans.emplace_back(dp);

        for (int end = i; end < n; end++) {
            if (is_valid(i, end)) {
                dp.emplace_back(s.substr(i, end - i+1));
                dfs(end + 1, dp);
                dp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string& s) {
        this->n = s.size();
        vector<string> dp;
        
        this->s = move(s);
        dfs(0, dp);
        return ans;
    }
};