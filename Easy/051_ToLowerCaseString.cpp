///// @Jollu
// To lower case string
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
    string toLowerCase(string&s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};


int main() {
    vector<int> vec{-1, 0, 3, 5, 9, 12};


}