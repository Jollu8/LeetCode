///// @Jollu
// 461. Hamming Distance


#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <sstream>
#include <iterator>


using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = 0;
        while(x || y){
            if((x&1) != (y&1)) n++;
            x >>= 1;
            y >>= 1;
        }
        return n;
    }
};

int main() {
    Solution s;

}