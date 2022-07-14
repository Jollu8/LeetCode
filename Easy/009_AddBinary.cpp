////@jollu

//66. Plus One
//
//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
//
//Increment the large integer by one and return the resulting array of digits.

#include <iostream>
#include <vector>
#include <bit>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int l = a.length() - 1;  // l stands for Large
        int s = b.length() - 1;  // s stands for Small


        if (l < s) {
            swap(a, b); // swap the strings
            l = l ^ s;        // swap the indexes
            s = l ^ s;
            l = l ^ s;
        }


        a.insert(0, 1, '0');
        l++;

        // add b to a
        while (s >= 0) {

            if (b[s] == '1') {
                int i = l;
                while (a[i] == '1') {
                    a[i] = '0';
                    i--;
                }
                a[i] = '1';
            }

            s--;
            l--;
        }


        if (a[0] == '0') a.erase(0, 1);

        return a;
    }
};

int main() {
    Solution s;
    string s1 = "1010";
    string s2 = "1011";
    cout << s.addBinary(s1, s2);

}