///// @Jollu
// 405. Convert a Number to Hexadecimal


#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <sstream>


using namespace std;

class Solution {
public:
    string toHex(int num) {
        std::stringstream stream;

        stream << std::hex << num;
        return stream.str();
    }
};

int main() {
    Solution s;

}