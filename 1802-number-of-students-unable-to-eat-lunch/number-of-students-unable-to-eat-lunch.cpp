#include <algorithm>

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circular = count(students.begin(), students.end(), 0);
        int square = students.size() - circular;

        for (auto sandwich : sandwiches) {
            if (sandwich && --square < 0) {
                return circular;
            } else if (!sandwich && --circular < 0) {
                return square;
            }
        }

        return 0;
    }
};
