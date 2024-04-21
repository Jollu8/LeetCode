class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1.empty() || num2.empty())
            return "0";
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> buf(n1 + n2, 0);
        int p1{}, p2{};

        for (int i = n1 - 1; i >= 0; --i) {
            int carry = 0;
            int x1 = num1[i] - '0';
            p2 = 0;

            for (int j = n2 - 1; j >= 0; --j) {
                int x2 = num2[j] - '0';
                auto sum = x1 * x2 + buf[p1 + p2] + carry;
                carry = sum / 10;
                buf[p1 + p2] = sum % 10;
                ++p2;
            }
            if (carry > 0)
                buf[p1 + p2] += carry;
            ++p1;
        }

        int i = buf.size() - 1;
        while (i >= 0 && buf[i] == 0)
            i--;
        if (i == -1)
            return "0";

        string ans;
        while (i >= 0)
            ans += to_string(buf[i--]);
        return ans;
    }
};