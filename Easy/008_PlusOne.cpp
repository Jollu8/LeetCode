////@jollu

//66. Plus One
//
//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//
//Increment the large integer by one and return the resulting array of digits.

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int buff = 0;
        *digits.rbegin() += 1;
        if (digits.back() < 10) {
            return digits;
        }
        // read from back work
        for (auto ritr = digits.rbegin(); ritr != digits.rend(); ritr++) {
            *ritr += buff;
            buff = *ritr / 10;
            *ritr %= 10;
        }
        if (buff) {
            digits.insert(digits.begin(), buff);
        }
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 2, 3};
    auto res = s.plusOne(vec);
    for (auto i: res) {
        cout << i << ",";
    }


}