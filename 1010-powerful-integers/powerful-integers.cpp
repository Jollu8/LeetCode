class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        if (bound < 2) return {};
        int max_i = (x == 1) ? 1 : log(bound) / log(x);
        int max_j = (y == 1) ? 1 : log(bound) / log(y);
        vector<int> res;
        for (int i = 0; i <= max_i; ++i) {
            for (int j = 0; j <= max_j && pow(x, i) + pow(y, j) <= bound; ++j) {
                res.push_back(pow(x, i) + pow(y, j));
            }
            if (x == 1) break;
        }
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};

