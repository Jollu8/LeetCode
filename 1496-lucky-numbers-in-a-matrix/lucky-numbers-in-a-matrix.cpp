class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;

        for (int i = 0; i < m; i++) {
            int min = INT_MAX;
            int x1 = 0;
            for (int j = 0; j < n; j++) {
                if (min > matrix[i][j]) {
                    min = matrix[i][j];
                    x1 = j;
                }
            }

            bool isMaxInColumn = true; // Assume it is until proven otherwise
            for (int k = 0; k < m; k++) {
                if (matrix[k][x1] > min) {
                    isMaxInColumn = false;
                    break;
                }
            }

            if (isMaxInColumn) {
                v.push_back(min);
            }
        }

        return v;
    }
};