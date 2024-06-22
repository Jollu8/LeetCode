
class Solution {
public:
    int nextGreaterElement(int x) {
        auto s = to_string(x);
        int n = s.size()-1, idx = -1, i = n-1;

        for(; i >= 0; i = s[i] < s[i+1] ? idx = i , -1 : i-1);
        for(i = n; idx != -1 && i > idx; i = s[i] > s[idx] ? swap(s[i], s[idx]), -1: i-1);
        reverse(s.begin() + idx +1, s.end());
        auto ans = stoll(s);
        if((int)ans <= x) return -1;
        return ans;
    }
};