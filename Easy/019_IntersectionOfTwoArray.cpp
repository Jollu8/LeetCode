///// @Jollu
// 349. Intersection of Two Arrays 2

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        int arr[1001] = {0};
        vector<int> vc;
        for (int i = 0; i < nums1.size(); i++) {
            arr[nums1[i]]++;
        }
        for (int j = 0; j < nums2.size(); j++) {
            if (arr[nums2[j]] > 0) {
                vc.push_back(nums2[j]);
                arr[nums2[j]]--;
            }
        }
        return vc;
    }
};


int main() {
    Solution s;
    vector<int> v1{4, 9, 5};
    vector<int> v2{9, 4, 9, 8, 4};
    auto res = s.intersect(v1, v2);
    for (auto i: res) {
        cout << i << ",";
    }
}