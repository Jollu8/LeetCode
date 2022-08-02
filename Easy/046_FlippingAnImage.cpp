///// @Jollu
// 832. Flipping an Image

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image) {
        vector<vector<int>> res{};
        for (auto i: image) {
            vector<int> temp;
            reverse(i.begin(), i.end());
            for (auto &j: i) {
                if (j == 0) temp.push_back(1);
                else temp.push_back(0);
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main() {
    Solution s;

};