class Solution {
public:
    vector<int> minSubsequence(vector<int>& A) {
        sort(A.begin(), A.end(), [](auto a, auto b) {return a > b;});
        auto m = accumulate(A.begin(), A.end(), 0);
        vector<int>ans;
        int cnt = A[0];
        m -= A[0];
        ans.push_back(cnt);

        for(int i = 1 ; i < A.size() && cnt <= m; ++i) {
            cnt += A[i];
            ans.push_back(A[i]);
            m -= A[i];
        }

        return ans;
    }
};