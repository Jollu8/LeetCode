class Solution {
    unordered_set<string> mp;
    string dp, ans;

    void bkg(int n) {
        if (dp.size() == n) {
            if (!mp.contains(dp))
                ans = dp;
            return;
        }

        dp += '0';
        bkg(n);
        dp.pop_back();
        dp += '1';
        bkg(n);

        dp.pop_back();
    }

public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        for (auto& c : nums)
            mp.insert(move(c));

        bkg(n);
        return ans;
    }
};