class Solution {
public:
    int balancedStringSplit(string s) {
        int ans {}, cnt{};
        for(auto c : s) {
            cnt  += c == 'L' ? 1 : -1;
            if(!cnt)++ans;
        }
        return ans;
        
    }
};