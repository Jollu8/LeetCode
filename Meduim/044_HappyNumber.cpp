///// @Jollu
// 202. Happy Number

#include <vector>
#include <string>
#include <iostream>


using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        int last = 0;
        if (n == 1 || n == 7) {
            return true;
        }

        while (n > 9) {
            int sum = 0;
            while (n) {
                last = n % 10;
                sum += (last * last);
                n = n / 10;
            }
            n = sum;
        }
        if (n == 1 || n == 7) {
            return true;
        } else
            return false;
    }
};

int main() {
    Solution s;
    cout <<  boolalpha <<  s.isHappy(19);
}