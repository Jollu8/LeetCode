class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
        vector<int> ans(A.size());
        bitset<51> a, b;
        for (int i = 0; i < A.size(); i++)
            ans[i] = (a.set(A[i]) & b.set(B[i])).count();
   
        return ans;
    }
};