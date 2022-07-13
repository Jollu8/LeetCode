////@jollu
//Remove Element
//
//Example 1:
//
//Input: nums = [3,2,2,3], val = 3
//Output: 2, nums = [2,2,_,_]
//Explanation: Your function should return k = 2, with the first two elements of nums being 2.
//It does not matter what you leave beyond the returned k (hence they are underscores).
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        nums.erase(
                std::remove_if(
                        nums.begin(), nums.end(),
                        [](int i) { return i == 3; }),
                nums.end());
        return nums.size();
    }

};


int main() {
    Solution s;
    vector<int> vec{3, 2, 2, 3};
    cout << s.removeElement(vec, 3) << endl;
    for (auto i: vec) {
        cout << i << " ";
    }


}