class Solution {
public:
    int candy(vector<int>& s) {
        int n = s.size();
        vector<int> v(n, 1);
        for(int i = 1; i  < n; ++i) v[i] = (s[i] > s[i-1]) ? v[i-1]+1 : v[i];

        for(int i = n -2; i>=0; --i) v[i] = (s[i]  > s[i+1]) ? max(v[i], v[i+1]+1) : v[i];

        return accumulate(v.begin(), v.end(), 0);
    }
};