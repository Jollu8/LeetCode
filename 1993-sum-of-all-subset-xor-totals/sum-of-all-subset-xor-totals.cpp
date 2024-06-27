class Solution {
    int ans{};
    vector<int> nums;

    void bkg(int ind, int x) {
        if (ind >= nums.size()) {
            ans += x;
            return;
        }

        bkg(ind + 1, x ^ nums[ind]);
        bkg(ind + 1, x);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        this->nums = move(nums);
        bkg(0, 0);
        return ans;
    }
};