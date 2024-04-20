class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row : matrix) {
            auto it = std::lower_bound(row.begin(), row.end(), target);
            if (it != row.end() && *it == target) {
                return true;
            }
        }
        return false;
    }
};