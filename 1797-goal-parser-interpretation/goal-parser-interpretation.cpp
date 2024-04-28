class Solution {
    unordered_map<string, string> u = {
        {"G", "G"}, {"()", "o"}, {"(al)", "al"}};
  
public:
    string interpret(string s) {
        string ans;
        string temp;

        for(auto i : s) {
            temp += i;
            if(u.contains(temp)){
                ans += u[temp];
                temp.clear();
            }
        }

        return ans;
    }
};
