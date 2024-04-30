class Solution {
public:
    int countKeyChanges(string s) {
        int ans{};
        char p = tolower(s[0]);
        for(int i = 1; i < s.size(); ++i) {
            if(p != tolower(s[i])) {
                ++ans;
                p = tolower(s[i]);
            }
        }
        return ans;
        
    }
};