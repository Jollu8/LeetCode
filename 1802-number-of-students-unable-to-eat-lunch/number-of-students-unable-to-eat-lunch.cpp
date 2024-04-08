class Solution {
public:
    int countStudents(vector<int> &a, vector<int> &b) {
        int circular = count(a.begin(), a.end(), 0);
        int square = a.size() - circular;

        auto it = find_if(b.begin(), b.end(), [&](int s) {
            if (s && --square < 0)return true;
            else if (!s && --circular < 0)return true;
            return false;
        });

        return it != b.end() ? distance(it, b.end()) : 0;
    }
};