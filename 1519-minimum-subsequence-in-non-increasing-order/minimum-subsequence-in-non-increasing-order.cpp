class Solution {
public:
    vector<int> minSubsequence(vector<int> &A) {
        // multiset<int, greater<>> seen(A.begin(), A.end());
        priority_queue<int> seen(A.begin(), A.end());
        int cnt{}, m = accumulate(A.begin(), A.end(), 0) / 2;
        vector<int> ans;

        while (cnt <= m){
            ans.push_back(seen.top()), seen.pop();
            cnt += ans.back();
        }
        return ans;
    }
};