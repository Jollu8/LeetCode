///// @Jollu
// 461. Bites convert

#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <sstream>
#include <iterator>
#include <bitset>
#include <climits>


using namespace std;

class Solution {
public:
    int findComplement(int num) {
        string toString = std::bitset<32>(num).to_string();
        string convertString;
        for (auto i: toString) {
            if (i == '0') convertString += '1';
            else if (i == '1') convertString += '0';
        }
        stringstream ss(convertString);

        bitset<32> bits;
        ss >> bits;
        return (int) bits.to_ulong();

    }
};

int main() {
    Solution s;

}