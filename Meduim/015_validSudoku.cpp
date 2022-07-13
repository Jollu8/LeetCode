////@jollu
//36. Valid Sudoku
//Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
//
//Each row must contain the digits 1-9 without repetition.
//Each column must contain the digits 1-9 without repetition.
//Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
//Note:
//
//A Sudoku board (partially filled) could be valid but is not necessarily solvable.
//Only the filled cells need to be validated according to the mentioned rules.


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        int i, j;
        int sm[9] = {0}, cm[9] = {0}, rm[9] = {0};
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (board[i][j] == '.')continue;
                int d = board[i][j] - '1';
                int m = 1 << d;
                int combined = (sm[(i / 3) * 3 + (j / 3)] | cm[j] | rm[i]);
                if (combined & m)return false;
                sm[(i / 3) * 3 + (j / 3)] |= m;
                cm[j] |= m;
                rm[i] |= m;
            }
        }
        return true;

    }
};

int main() {
    vector<vector<char>> vec{{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                             {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                             {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                             {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                             {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                             {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                             {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                             {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                             {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution s;
    cout << s.isValidSudoku(vec);


}