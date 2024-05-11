class Solution {
public:
    int findFinalValue(vector<int>& A, int t) {
        sort(A.begin(), A.end());
        for(auto i : A) t = (i == t) ? t*2 : t;
        return t;
    }
};