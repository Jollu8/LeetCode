class Solution {
public:
    int addedInteger(vector<int>& n1, vector<int>& n2) {
        return *min_element(n2.begin(), n2.end()) - *min_element(n1.begin(), n1.end());
    }
};