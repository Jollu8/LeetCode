class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& A) {
        map<int, int> count;
        int m = 0;
        for (auto& v : A) {
            int side = min(v[0], v[1]);
            m = max(m, side);
            count[side]++;
        }
        return count[m];
    }
};

