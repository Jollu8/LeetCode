///// @Jollu
// 2351. First Letter to Appear Twice


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> m;
        int n = s.length();
        char c;
        for (int i = 0; i < n; i++) {
            if (!m[s[i]]) m[s[i]]++;
            else {
                c = s[i];
                break;
            }
        }
        return c;
    }
};


int main() {

}