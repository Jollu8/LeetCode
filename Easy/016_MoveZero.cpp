///// @Jollu
// 283. Move Zeroes

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;


class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        vector<int>::iterator firstZero = std::find(nums.begin(), nums.end(), 0);
        for (vector<int>::iterator nextNonZero = firstZero + 1; nextNonZero < nums.end();) {
            if (*nextNonZero == 0) {
                nextNonZero++;
            } else {
                *firstZero = *nextNonZero;
                *nextNonZero = 0;
                firstZero++;
                nextNonZero++;
            }
        }

    }
};


int main() {
    Solution s;
    vector<int> vec{0, 1, 0, 3, 12};
    s.moveZeroes(vec);
    for (auto i: vec) {
        cout << i << " ";
    }
}