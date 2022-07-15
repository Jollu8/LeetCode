////@jollu

// 153 Find Maximum in Rotated Array  and return index

#include <iostream>
#include <vector>
#include <climits>


using namespace std;
int min = INT16_MIN;


class Solution {
public:
    int removeDuplicates(vector<int> &nums) {

        return distance(nums.begin(),  (max_element(nums.begin(), nums.end())));


    }
};

int main() {
    Solution s;
    vector<int> vec{1, 1, 1, 2, 0,2, 3};
    cout << s.removeDuplicates(vec);
}