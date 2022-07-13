////@jollu
//4. Median of Two Sorted Arrays
//        Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//
//The overall run time complexity should be O(log (m+n)).
//
//
//
//Example 1:
//
//Input: nums1 = [1,3], nums2 = [2]
//Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.


#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        size_t sum_m_n = (nums1.size() + nums2.size());
        size_t goal_index = sum_m_n / 2;

        int goal_item = 0, prev_item = 0;
        size_t count = 0;

        auto index_1 = nums1.begin();
        auto index_2 = nums2.begin();

        while (count <= goal_index) {
            prev_item = goal_item;

            if (index_1 == nums1.end()) {
                goal_item = *index_2;
                ++index_2;
            } else if (index_2 == nums2.end()) {
                goal_item = *index_1;
                ++index_1;
            } else if (*index_1 < *index_2) {
                goal_item = *index_1;
                ++index_1;
            } else {
                goal_item = *index_2;
                ++index_2;
            }

            count++;
        }


        if (sum_m_n % 2 == 1) {
            return goal_item;
        } else {
            return (goal_item + prev_item) / 2.0;
        }

    }
};

int main() {


}