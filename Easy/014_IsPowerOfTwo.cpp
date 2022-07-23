///// @Jollu
// Is power of two

#include <vector>
#include <string>
#include <iostream>
#include <map>


using namespace std;


class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int x = static_cast<long int>(n);
        if (n == 0)return false;
        return (x & (x - 1)) == 0;
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 2, 3, 1};
    cout << boolalpha << s.containsNearbyDuplicate(vec, 2);
}