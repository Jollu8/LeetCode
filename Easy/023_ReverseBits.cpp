///// @Jollu
// 190. Reverse Bits


#include <cstdint>


using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m = 0;
        for (int i = 0; i < 32; i++) {
            m = m << 1;
            if ((n & 1) == 1)
                m += 1;
            n = n >> 1;
        }
        return m;
    }
};

int main() {
    Solution s;


}