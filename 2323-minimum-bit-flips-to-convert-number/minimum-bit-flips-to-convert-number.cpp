class Solution {
public:
    int minBitFlips(int start, int goal) {
        return bitset<sizeof(int)*8>(start^goal).count();
    }
};