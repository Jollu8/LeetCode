///// @Jollu
// 242. Valid Anagram

#include <vector>
#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main() {
    Solution s;
    vector<vector<int>> v1{{1,  4,  7,  11, 15},
                           {2,  7,  8,  12, 19},
                           {3,  6,  9,  16, 22},
                           {10, 13, 14, 17, 24},
                           {18, 21, 23, 26, 30}};
//    cout << s.searchMatrix(v1, 5);
}