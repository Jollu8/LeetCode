///// @Jollu
// 728. Self Dividing Numbers



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        while (left <= right) {
            auto str = to_string(left);
            bool isDividing = true;
            for (auto i: str) {
                if ((i - '0') == 0 || left % (i - '0') != 0) {
                    isDividing = false;
                    break;
                }
            }
            if (isDividing) {
                vec.push_back(left);
            }
            left++;
        }
        return vec;
    }
};


int main() {
    Solution s;
    auto res = s.selfDividingNumbers(47, 85);
    for (auto i: res) cout << i << " ";


}