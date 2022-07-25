///// @Jollu
// 345. Reverse Vowels of a String


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int e = s.length() - 1;
        while (i < e) {
            while (i < e && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
                   s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
                i++;
            while (i < e && s[e] != 'a' && s[e] != 'e' && s[e] != 'i' && s[e] != 'o' && s[e] != 'u' &&
                   s[e] != 'A' && s[e] != 'E' && s[e] != 'I' && s[e] != 'O' && s[e] != 'U')
                e--;
            swap(s[i], s[e]);
            i++;
            e--;
        }
        return s;
    }
};

int main() {

}