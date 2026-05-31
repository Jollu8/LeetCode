class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a{}, b{};
        for(int n: nums){
            a ^= n & (~b);
            b ^= n & (~a);
        }
        return a;
    }
};