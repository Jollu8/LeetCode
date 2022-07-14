////@jollu

//54. Spiral Matrix





#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int left = 0, right = c - 1, top = 0, bottom = r - 1;
        vector<int> v;
        while (top <= bottom) {
            for (int i = left; i <= right; i++)
                v.push_back(matrix[top][i]);
            top++;
            if (left <= right) {
                for (int i = top; i <= bottom; i++)
                    v.push_back(matrix[i][right]);
                right--;
            }
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    v.push_back(matrix[bottom][i]);
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    v.push_back(matrix[i][left]);
                left++;
            }
        }
        return v;

    }
};

int main() {
    Solution s;
    vector<vector<int>> vec(9);
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            vec[i].push_back(j);
        }
    }
    auto res = s.spiralOrder(vec);
    for (auto i: res) {
        cout << i << " ";
    }


}