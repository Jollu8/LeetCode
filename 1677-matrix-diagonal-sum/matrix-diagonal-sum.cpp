class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum{};
    

        for(int i = 0, j{}; i < mat.size(); ++i, ++j) {
            sum += mat[i][j];
        }

        for(int i = 0, j = mat.size()-1; i < mat.size(); ++i, --j) {
            sum += mat[i][j];
        }

        if(mat.size()&1) {
            int n = mat.size()/2;
            sum -= mat[n][n];
        }
        return sum;
        
    }
};