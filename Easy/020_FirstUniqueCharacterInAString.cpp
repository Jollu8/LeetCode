///// @Jollu
// 387. First Unique Character in a String

#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int a[26] = {0};
        for (char &x: s)
            a[x - 'a']++;
        for (int i = 0; i < s.size(); i++)
            if (a[s[i] - 'a'] == 1)return i;
        return -1;
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