class Solution {
    int ans{};
    vector<int> nums;

    int bkg(int ind, int x) {
        if (ind == nums.size()) {
            if (x == ans)
                return 1;
            else
                return 0;
        }

        int tmp = bkg(ind + 1, x | nums[ind]);
        int back = bkg(ind + 1, x);
        return back + tmp;
    }

public:
    int countMaxOrSubsets(vector<int>& nums) {
        for (auto i : nums)
            ans |= i;

        this->nums = move(nums);

        return bkg(0, 0);
    }
};