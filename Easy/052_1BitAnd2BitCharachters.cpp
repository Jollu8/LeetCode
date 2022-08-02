///// @Jollu
//717. 1-bit and 2-bit CharactersTo lower case string



#include <iostream>
#include <vector>
#include <array>
//#include <set>
#include <climits>
#include <unordered_map>
//#include <algorithm>

using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int> &bits) {
        if (bits.size() == 1) return true;
        bool ans = false;
        for (int i = 0; i < bits.size(); i++) {
            if (!(ans = bits[i] != 1)) {
                i++;
            }
        }
        return ans;
    }
};


int main() {
    vector<int> vec{-1, 0, 3, 5, 9, 12};


}