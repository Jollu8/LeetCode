class Solution {
public:
    int countStudents(vector<int> &a, vector<int> &b) {
        int circular = count(a.begin(), a.end(), 0), square = a.size()- circular;
        
        for (auto i: b) {
            if (i && --square < 0) return circular;
            else if (!i && --circular < 0) return square;
        }
        return 0;
    }
};