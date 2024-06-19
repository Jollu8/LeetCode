class Solution {
public:
    vector<int> twoSum(vector<int>& A, int t) {
        int n = A.size(), l{}, r = A.size()-1, cur;
        for (; (cur = A[l] + A[r]) != t ; cur < t ? ++l : --r);
        return {l+1, r+1};
    }
};