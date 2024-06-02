class Solution {
    void rev(vector<char> &s, int l, int r) {
        if (l >= r) return;
        swap(s[l], s[r]);
        rev(s, l + 1, r - 1);
    }

public:
    void reverseString(vector<char> &s) {
        rev(s, 0, s.size()-1 );
    }
};
