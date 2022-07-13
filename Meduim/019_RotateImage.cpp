////@jollu

//48. Rotate Image
//Medium
//
//10186
//
//522
//
//Add to List
//
//Share
//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//
//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>> &a) {
        int N = a.size();
        for (int i = 0; i < N / 2; i++) {
            for (int j = i; j < N - i - 1; j++) {
                int temp = a[i][j];
                a[i][j] = a[N - 1 - j][i];
                a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
                a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
                a[j][N - 1 - i] = temp;
            }
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>> vec{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    for (auto i: vec) {
        for (auto j: i) {
            cout << j << ",";
        }
        cout << endl;
    }

}