///// @Jollu
// 167. Two Sum II - Input Array Is Sorted


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int n = numbers.size();
        for (int i = 0; i < n; i++) {
            int item = target - numbers[i];
            int l = i + 1, r = n - 1;
            while (l <= r) {
                int m = (l + r) / 2;
                if (item == numbers[m]) return {i + 1, m + 1};
                if (item < numbers[m]) r = m - 1;
                if (item > numbers[m]) l = m + 1;
            }
        }
        return {69, 420};

    }
};

int main() {

}