////@jollu

//13. Roman to Integer
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//
//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000



#include <string>
#include <map>
#include <iostream>


using namespace std;


class Solution {
public:
    int ToRoman(string &s) {
        map<char, int> rmap;
        rmap['I'] = 1;
        rmap['V'] = 5;
        rmap['X'] = 10;
        rmap['L'] = 50;
        rmap['C'] = 100;
        rmap['D'] = 500;
        rmap['M'] = 1000;
        int number = 0, i = 0;
        if (s.length() <= 1) {
            return rmap[s.at(0)];
        } else {
            while (i < s.size()) {
                if (rmap[s[i]] < rmap[s[i + 1]]) {
                    number += rmap[s[i + 1]] - rmap[s[i]];
                    i += 2;
                } else {
                    number += rmap[s[i]];
                    i++;
                }
            }
            return number;
        }

    }



};


int main() {
    Solution s1;
    string str = "LI";
    cout << s1.ToRoman(str);
}