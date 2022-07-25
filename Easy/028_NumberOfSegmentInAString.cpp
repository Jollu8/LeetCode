///// @Jollu
// 434. Number of Segments in a String


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
    int countSegments(string str) {
        std::stringstream stream(str);
        return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
    }
};

int main() {
    Solution s;

}