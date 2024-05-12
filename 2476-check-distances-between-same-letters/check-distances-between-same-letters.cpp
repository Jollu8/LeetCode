class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        vector<int> v(26, -1);
        for (int i = 0; i < s.size(); ++i) {
            int c = s[i] - 'a';
            if (v[c] == -1)
                v[c] = i+1;
            else {
                if (i - v[c] != d[c])
                    return false;
                v[c] = i+1;
            }
        }
        return true;
    }
};
