class Solution {
public:
    int numOfStrings(vector<string>& t, string s) {
        int ans{};
        for(auto &c : t) {
            if(s.find(c) != string::npos)++ans;
        }
        return ans;
    }
};