///// @Jollu
// 219. Contains Duplicate II

#include <vector>
#include <string>
#include <iostream>
#include <map>


using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            auto it = m.find(nums[i]);
            if (it != m.end()) {
                if (abs(it->second - i) <= k)
                    return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 2, 3, 1};
    cout << boolalpha << s.containsNearbyDuplicate(vec, 2);
}