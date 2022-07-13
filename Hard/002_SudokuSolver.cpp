////@jollu

//37. Sudoku Solver
//Write a program to solve a Sudoku puzzle by filling the empty cells.
//
//A sudoku solution must satisfy all of the following rules:
//
//Each of the digits 1-9 must occur exactly once in each row.
//Each of the digits 1-9 must occur exactly once in each column.
//Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
//The '.' character indicates empty cells.


#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board,vector<vector<char>>& cp,vector<vector<int>>& row,vector<vector<int>>& col,vector<vector<int>>& block){
        if(i>=9) return true;
        if(j>=9) return solve(i+1,0,board,cp,row,col,block);

        if(cp[i][j]!='.'){
            return solve(i,j+1,board,cp,row,col,block);
        }

        for(int k=1;k<=9;k++){
            if(block[3*(i/3)+(j/3)][k] || row[i][k] || col[j][k]) continue;

            board[i][j]=(char)48+k;
            row[i][k]=1,col[j][k]=1,block[3*(i/3)+j/3][k]=1;

            if(solve(i,j+1,board,cp,row,col,block)) return true;

            row[i][k]=0,col[j][k]=0,block[3*(i/3)+(j/3)][k]=0;
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(10,0));
        vector<vector<int>> col(9,vector<int>(10,0));
        vector<vector<int>> block(9,vector<int>(10,0));//3*3 blocks
        vector<vector<char>> copy(9);//copy of the board vector

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                copy[i].push_back(board[i][j]);
                if(board[i][j]=='.') continue;

                row[i][board[i][j]-'0']=1;
                col[j][board[i][j]-'0']=1;
                block[3*(i/3)+(j/3)][board[i][j]-'0']=1;
            }
        }
        bool t= solve(0,0,board,copy,row,col,block);
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
    s.solveSudoku(vec );

    for(auto i : vec) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }


}