class Solution {
public:
    vector<int> twoSum(vector<int>& A, int t) {
        for(int l = 0, r = A.size()-1; l < r;){
            auto s = A[l] + A[r];
            if(s == t) return {l+1, r+1};
            else if(s < t) ++l;
            else --r;
        }
        return {42,73};
    }
};