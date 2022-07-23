///// @Jollu
// 326. Power of Three

//#include <vector>
////#include <string>
//#include <algorithm>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n && (n % 3 == 0)) n /= 3;
        return n == 1;
    }

};


int main() {
    Solution s;
    cout << boolalpha << s.isPowerOfThree(27);
}