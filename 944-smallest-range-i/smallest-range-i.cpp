class Solution {
public:
    int smallestRangeI(vector<int>& A, int k) {
        auto [a, b] = std::minmax_element(A.begin(), A.end());
        auto ans =  abs(*b + -k) - abs(*a+k);
        return ans  < 0 ? 0 : ans;
    }
};