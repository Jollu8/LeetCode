class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
        int n = A.size(), cnt{};
        vector<int>ans(n), seen(n+1);
        for(int i = 0; i < n; ++i) {
            if(++seen[A[i]] == 2)++cnt;
            if(++seen[B[i]] == 2)++cnt;
            ans[i] = cnt;
        }
        return ans;
    }
};