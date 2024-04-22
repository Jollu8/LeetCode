class Solution {
public:
    int myAtoi(string str) {
        int i = 0, sign = 1, ans = 0;
        while (i < str.size() && str[i] == ' ') { i++; }
        if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
            sign = (str[i++] == '-') ? -1 : 1;
        }
        while (i < str.size() && isdigit(str[i])) {
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + (str[i++] - '0');
        }
        return ans * sign;
    }
};
