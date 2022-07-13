////@jollu
//33. Search in Rotated Sorted Array
//Example 1:
//
//Input: nums = [4,5,6,7,0,1,2], target = 0
//Output: 4


#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        class Solution {
        public:
            int search(vector<int> &nums, int target) {
                for (int i = 0; i < nums.size(); ++i) {
                    if (nums[i] == target) {
                        return i;
                    }
                }
                return -1;

            }
        };
    }
};

int main() {
    Solution s;
    vector<int> vec{4, 5, 6, 7, 0, 1, 2};
    cout << s.search(vec, 7);

}