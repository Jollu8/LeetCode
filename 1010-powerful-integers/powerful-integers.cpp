class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> buf;
        for (int i = 1; i < bound; i *= x) {
            for (int j = 1; i + j <= bound; j *= y) {
                buf.insert(i + j);
                if (y == 1) break;
            }
            if (x == 1) break;
        }
        return vector<int>(buf.begin(), buf.end());
    }
};
