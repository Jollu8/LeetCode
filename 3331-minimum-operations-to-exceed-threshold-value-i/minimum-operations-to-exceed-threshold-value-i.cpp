class Solution {
public:
    int minOperations(vector<int>& A, int k) {
        return count_if(A.begin(), A.end(), [&](int i){return i <k;});      
    }
};