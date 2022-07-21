///// @Jollu
// 166. Fraction to Recurring Decimal


#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <unordered_map>
#include<sstream>


using namespace std;

class Solution {
public:

    string fractionToDecimal(int numerator, int denominator) {
        stringstream ss, ss2;
        long long n = numerator, d = denominator, q = n / d, r = n % d;
        if (q == 0 && ((n > 0 && d < 0) || (n < 0 && d > 0)))
            ss << '-';
        ss << q;
        if (r)
            ss << ".";
        unordered_map<long long, int> m;
        int i = 0;
        if (r < 0) r = -r;
        if (d < 0) d = -d;
        while (r) {
            n = r * 10;
            if (m.find(n) == m.end()) {
                q = n / d, r = n % d;
                ss2 << q;
                m[n] = i++;
            } else {
                return ss.str() + ss2.str().substr(0, m[n]) + '(' + ss2.str().substr(m[n]) + ')';
            }
        }
        return ss.str() + ss2.str();
    }

};


int main() {
    Solution s;
    cout << s.fractionToDecimal(1, 2);

}

