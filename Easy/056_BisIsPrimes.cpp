///// @Jollu
// bit is primes



#include <iostream>
#include <vector>
#include<unordered_map>
#include <bitset>
#include <algorithm>

using namespace std;

class Solution {

    static bool is_prime(int number) { // check is  prime
        if (number < 2) return false;
        if (number == 2) return true;
        if (number % 2 == 0) return false;
        for (int i = 3; (i * i) <= number; i += 2) {
            if (number % i == 0) return false;
        }
        return true;
    }

public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;                          // Count prime after binary string
        while (left <= right) {
            auto to_str((bitset<32>(left).to_string()));         //convert binary to string
            auto count_bin = count_if(to_str.begin(), to_str.end(), [](auto ch) { return ch == '1'; });
            if (is_prime(count_bin)) count++;
            left++;
        }
        return count;


    }
};

int main() {
    Solution s;
    cout << s.countPrimeSetBits(6, 10);
}