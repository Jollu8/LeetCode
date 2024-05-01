class Solution {
public:
    int findGCD(vector<int>& A) {
        return gcd(*min_element(A.begin(), A.end()), *max_element(A.begin(), A.end()));
    }
};