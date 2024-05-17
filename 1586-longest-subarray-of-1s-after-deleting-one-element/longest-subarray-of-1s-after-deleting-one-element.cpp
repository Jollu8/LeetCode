


class Solution {
public:
    int longestSubarray(vector<int>& A, int l = 0, int r = 0) {
        for(int cnt = 1; r < A.size(); ++r) {
            cnt = !A[r] ? cnt-1 : cnt;
            cnt = (cnt < 0 && !A[l++]) ? cnt+1 : cnt;
        }
        return r - l - 1;
    }
};
