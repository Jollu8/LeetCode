class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for (int i = 0; i < nums.size(); ++i) {
            int ind = i;

            for(int j = i+1; j < nums.size(); ++j) {
                if (nums[i] > nums[j]) {
                    ind = j;
                }
            }
            if (i != ind) {
                swap(nums[i], nums[ind]);
                --i;
            }
            
        }
    }
};