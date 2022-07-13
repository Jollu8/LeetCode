////@jollu


#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == target)
                return i;
            else if (nums[i] > target)
                return i;
        return nums.size();
    }
};
int main() {
    Solution s;
    vector<int> vec{1,3,5,6};
    cout <<  s.searchInsert(vec, 55);

}