
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circular = count(students.begin(), students.end(), 0);
        int square = students.size() - circular;

        auto it =
            find_if(sandwiches.begin(), sandwiches.end(), [&](int sandwich) {
                if (sandwich && --square < 0) {
                    return true;
                } else if (!sandwich && --circular < 0) {
                    return true;
                }
                return false;
            });

        return it != sandwiches.end() ? distance(it, sandwiches.end()) : 0;
    }
};
