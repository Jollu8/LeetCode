class Solution {
public:
    int longestSubarray(vector<int>& A) {
        int l{}, r{};
        for(int cnt = 1; r < A.size(); ++r) {
            if(!A[r])--cnt;
            if(cnt < 0 && !A[l++]) ++cnt;
        }
        return r - l - 1;
    }
};