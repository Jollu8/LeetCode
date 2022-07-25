///// @Jollu
// 509. Fibonacci Number



#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <unordered_map>
#include <exception>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int fib(int x) {
        if (x == 0)
            return 0;

        if (x == 1)
            return 1;

        return fib(x - 1) + fib(x - 2);
    }
};

int main() {
    Solution s;
    cout << s.fib(6);
}