class Solution {
public:
    int addedInteger(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        return n2.back() - n1.back();
    }
};