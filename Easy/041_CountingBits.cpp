///// @Jollu
// 338. Counting Bits



#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:

    int findSetBits(int n) {
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (((1 << i) & n) != 0) count++;
        }
        return count;
    }

public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            bits[i] = findSetBits(i);
        }

        return bits;
    }

};

int main() {

}