class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &A, int index = 0) {
        vector<vector<string>> ans(A.size());
        unordered_map<string_view, int> mp;
        for (int i{}; i < A.size(); ++i) {
            auto tmp = A[i];
            sort(A[i].begin(), A[i].end());
            if (auto f = mp.find(A[i]); f != mp.end())
                ans[mp[A[i]]].emplace_back(move(tmp));
            else ans[mp[A[i]] = index++].emplace_back(move(tmp));
        }
        ans.resize(index);
        return ans;
    }
};
