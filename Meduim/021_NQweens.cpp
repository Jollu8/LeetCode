////@jollu

//51. N-Queens
//Hard
//
//7441
//
//180
//
//Add to List
//
//Share
//The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.
//
//Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.
//
//Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
//
//
//
//Example 1:
//
//
//Input: n = 4
//Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
//Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above





#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int n;

    string getNq(int p) {
        string s(n, '.');
        s[p] = 'Q';
        return s;
    }

    void nQueens(int p, int l, int m, int r, vector<vector<string>> &res) {
        static vector<string> ans;
        if (p >= n) {
            res.push_back(ans);
            return;
        }
        int mask = l | m | r;
        for (int i = 0, b = 1; i < n; ++i, b <<= 1)
            if (!(mask & b)) {
                ans.push_back(getNq(i));
                nQueens(p + 1, (l | b) >> 1, m | b, (r | b) << 1, res);
                ans.pop_back();
            }
    }

public:
    vector<vector<string> > solveNQueens(int n) {
        this->n = n;
        vector<vector<string>> res;
        nQueens(0, 0, 0, 0, res);
        return res;
    }


};

int main() {
    Solution s;
    auto res = s.solveNQueens(4);
    for (auto i: res) {
        for (auto j: i) {
            cout << "[" << j << "]" << ",";
        }
    }


}