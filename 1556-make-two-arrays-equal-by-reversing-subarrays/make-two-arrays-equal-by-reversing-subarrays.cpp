class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        sort(a.begin(), a.end());
        sort(t.begin(), t.end());
        return a == t;
    }
};