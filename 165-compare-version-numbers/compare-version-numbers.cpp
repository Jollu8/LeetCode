class Solution {
public:
    int compareVersion(string s1, string s2) {
        int i = 0, j = 0;

        int number1 = 0, number2 = 0;
        while(i < s1.size() || j < s2.size())
        {
            while(i < s1.size() && s1[i] != '.')
            {
                number1 = number1 * 10 + (s1[i] - '0');
                i++;
            }
            while(j < s2.size() && s2[j] != '.')
            {
                number2 = number2 * 10 + (s2[j] - '0');
                j++;
            }
            if(number1 > number2)
            {
                return 1;
            }
            if(number1 < number2)
            {
                return -1;
            }
            number1 = 0, number2 = 0;
            i++;
            j++;
        }
        return 0;
    }
};
