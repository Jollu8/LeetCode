class Solution {
public:
    int splitNum(int num) {
        auto s = to_string(num);
        sort(s.begin(), s.end());

        string a, b;
        for (int i = 0, j = 1; i < s.size() || j < s.size(); i += 2, j+= 2) {
            a += s[i];
            b += s[j];
        }
        return stoi(a) + stoi(b);
    }
};