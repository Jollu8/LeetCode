///// @Jollu
// 349. Intersection of Two Arrays

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        map<int, int> mp1, mp2;

        // mark all element so we can easily know if there is same number of two arrays
        for (int i: nums1) mp1[i] = 1;
        for (int i: nums2) mp2[i] = 1;

        vector<int> nums;
        for (int i: nums1) {
            // check if there is two element have same value, then remark with 0 in order to avoid double check
            if (mp1[i] == 1 && mp2[i] == 1) {
                nums.push_back(i);
                mp1[i] = mp2[i] = 0;
            }
        }
        return nums;
    }


};


int main() {
    Solution s;

}