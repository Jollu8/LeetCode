class Solution {
public:
    int scoreOfString(string s) {
        return std::transform_reduce(s.begin(), s.end()-1, s.begin()+1, 0, std::plus<>(), [](char a, char b) {
            return abs(a - b);
        });
    }
};
