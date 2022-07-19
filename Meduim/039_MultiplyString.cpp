///// @Jollu
// 43. Multiply Strings



#include <string>

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    string multiply(string num1, string num2) {
        int i, j;
        int m, n;
        n = num2.size();
        m = num1.size();
        // max (m + n) digits
        vector<int> product(m + n, 0);
        string result;

        // reverse for ease of calc
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // digit i * digit j contributes to digit i + j
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                product[i + j] += (num1[i] - '0') * (num2[j] - '0');
                product[i + j + 1] += product[i + j] / 10;
                product[i + j] %= 10;
            }
        }

        // remove leading 0; keep last 0 if all 0
        for (i = m + n - 1; i > 0 && 0 == product[i]; i--);

        for (; i >= 0; i--)
            result += to_string(product[i]);

        return result;
    }
};

int main() {
    Solution s;
    string str1 = "498828660196";
    string str2 = "840477629533";
    cout << s.multiply(str1, str2);

}