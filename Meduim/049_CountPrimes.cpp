///// @Jollu
// 204. Count Primes

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        bool *isprime = new bool[n + 1];
        for (int i = 2; i < n + 1; i++) {
            isprime[i] = true;
        }
        for (int i = 2; i * i < n; i++) {
            if (isprime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isprime[j] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (isprime[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    cout << s.countPrimes(10);
};