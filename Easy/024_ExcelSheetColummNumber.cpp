///// @Jollu
// 171. Excel Sheet Column Number


#include <cstdint>
#include <string>


using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char c: columnTitle) {
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};

int main() {
    Solution s;
}