class Solution {
public:
    int singleNumber(vector<int>& A) {
        int ans{};
        return accumulate(A.begin(), A.end(), 0, bit_xor<>());
    }
};