class Solution {
public:
    int countVowelStrings(int n) {
        int ans{}, sum{};

        for(int i = 1; i < n+2; ++i) {
            sum += i * (i + 1) / 2;
            ans += sum;
        }
        return ans;
        
    }
};