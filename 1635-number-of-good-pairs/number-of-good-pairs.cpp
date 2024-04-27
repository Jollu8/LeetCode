class Solution {
public:
    int numIdenticalPairs(vector<int>& A) {
        int ans{};
        for(auto i = 0; i < A.size()-1; ++i) {
            for(int j = i+1; j < A.size(); ++j) {
                if(A[i] == A[j]) ++ans;
            }
        }
        return ans;
    }
};