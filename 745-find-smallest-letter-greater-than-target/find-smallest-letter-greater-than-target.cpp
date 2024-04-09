class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char t) {
        int l{};

        for (int r = v.size()-1; l <= r; ) {
            int m = l + (r-l) / 2;
            v[m] <= t ? l = m+1 : r = m-1;
        }
        return l < v.size() ? v[l] : v[0];
    }
};