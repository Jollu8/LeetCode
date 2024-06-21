class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        vector<vector<int>> ans;
        sort(A.begin(), A.end());
        set<vector<int>> mp;

        for(int i = 0; i < A.size(); ++i) {
            int l = i+1, r = A.size()-1;

            while(l < r) {
                auto cur = A[i] + A[l] + A[r];
                if(!cur) mp.insert({A[i], A[l++], A[r--]});
                else if(cur < 0)++l;
                else --r;
            }
        }

        for(auto &v : mp) ans.emplace_back(v);
        return ans;
    }
};