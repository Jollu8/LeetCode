class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& A, int t) {
        return count_if(A.begin(), A.end(), [&](int i){return i >= t;});
    }
};