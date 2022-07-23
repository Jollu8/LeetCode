///// @Jollu
//Find missing digit

#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    int missingNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] != 0) return 0;
        else if (nums.size() == 1) {
            if (nums[0] > 0) return nums[0] - 1;
        }
        for (auto i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] + 1 != nums[i + 1])return nums[i] + 1;
        }
        return nums.size();
    }
};

int main() {
    Solution s;

}