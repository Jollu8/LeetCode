class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        deque<int> dq;
        for (int i = 0; i < nums.size(); ++i) {
            if (index[i] >= dq.size()) dq.push_back(nums[i]);
            else dq.insert(dq.begin() + index[i], nums[i]);
        }
        return vector<int>(dq.begin(), dq.end());
    }
};
