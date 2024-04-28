class Solution {
public:
    vector<int> decompressRLElist(vector<int>& A) {
        vector<int> ans;
        for(int i = 0 ;i < A.size() ; i +=2) {
            int a = A[i];
            while(a--) {
                ans.push_back(A[i+1]);
            }
        }
        return ans;
    }
};