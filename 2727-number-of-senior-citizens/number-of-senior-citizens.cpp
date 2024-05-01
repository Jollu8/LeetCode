class Solution {
public:
    int countSeniors(vector<string>& s) {
        return count_if(s.begin(), s.end(), [](auto&a){return ((a[11] - '0') * 10 +  (a[12] -'0') > 60);});
    }
};