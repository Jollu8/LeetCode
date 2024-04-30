class Solution {
public:
    int prefixCount(vector<string>& s, string t) {
        return count_if(s.begin(), s.end(), [&](string_view sv) {return sv.starts_with(t);});
    }
};