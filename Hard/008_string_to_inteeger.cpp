class Solution {
public:
    int StringToINt(std::stirng &s) {
        if (std::isalpha(s[0])) return 0;

        int n = 0;
        std::stringstream ss(s);
        ss >> n;
        return n;

    }
};