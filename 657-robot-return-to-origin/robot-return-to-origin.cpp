class Solution {
public:
    bool judgeCircle(string &s) {
        int x{}, y{};

        for (auto c: s) {
            switch (c) {
                case 'U': {
                    ++x;
                    break;
                }
                case 'D': {
                    --x;
                    break;
                }
                case 'L': {
                    ++y;
                    break;
                }
                default :
                    --y;
            }
        }
        return y == 0 && x == 0;
    }
};