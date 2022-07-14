////@jollu

// 59. Spiral Matrix II
//Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
//
//Input: n = 3
//Output: [[1,2,3],[8,9,4],[7,6,5]]

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int x=1;
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        while(x<=n*n)
        {
            for(int i=minr,j=minc;j<=maxc;j++)
                ans[i][j]=x++;
            minr++;
            for(int i=minr,j=maxc;i<=maxr;i++)
                ans[i][j]=x++;
            maxc--;
            for(int i=maxr,j=maxc;j>=minc;j--)
                ans[i][j]=x++;
            maxr--;
            for(int i=maxr,j=minc;i>=minr;i--)
                ans[i][j]=x++;
            minc++;
        }
        return ans;
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
    vector<int> v{3, 5};
    auto res = s.generateMatrix(3);
    for (auto i: res) {
        for (auto j: i) {
            cout << j << ",";
        }
        cout << endl;
    }


}