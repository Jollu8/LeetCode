///// @Jollu
// 189. Rotate Array


//#include <string>
#include <vector>
#include <algorithm>
//#include <iostream>
#include <forward_list>
#include <memory>
//#include <limits>

using namespace std;

class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());


    }
};

int main() {

}