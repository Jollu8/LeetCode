class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& A) {
        int ans{};
        for(auto &v : A)
            sort(v.begin(), v.end());
        
        vector<int> buf (A[0].size());
        for(int i = 0 ; i < A.size(); ++i) {
            for(int j = 0; j < A[0].size(); ++j) 
                buf[j] = max(buf[j], A[i][j]);
        }
        return accumulate(buf.begin(), buf.end(), 0);

    }
};