///// @Jollu
// 172. Factorial Trailing Zeroes


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;


class Solution {
public:
    int trailingZeroes(int n) {
        int denom = 5, zeroes = 0;
        while (n >= denom) {
            zeroes += (n / denom);
            denom *= 5;
        }
        return zeroes;
    }
};

int main() {

}