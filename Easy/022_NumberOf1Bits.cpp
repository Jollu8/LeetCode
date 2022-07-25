///// @Jollu
// 191. Number of 1 Bits

#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <iostream>


using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0) {
            n = n & n - 1;
            count++;
        }
        return count;

    }
};

int main() {
    Solution s;
    cout << s.hammingWeight(00000000010001);

}