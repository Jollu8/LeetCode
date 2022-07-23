///// @Jollu
// 217. Contains Duplicate

#include <vector>
#include <string>
#include <iostream>
#include <set>


using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        return set<int>(nums.begin(), nums.end()).size() != nums.size();
//        return res.size() != nums.size();
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 2, 3, 1};
    cout << boolalpha << s.containsDuplicate(vec);
}