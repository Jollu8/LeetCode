class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& A) {
        sort(A.begin(), A.end());
        for(int i = 1 ; i <A.size()-1; ++i) {
            if(A[i+1] + A[i-1] != A[i]*2)return false;
        }
        return true;
    }
};