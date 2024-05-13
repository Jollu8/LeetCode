class Solution {
public:
    string greatestLetter(string s) {
        set<char> up, down;
        for(auto c : s) {
            if(islower(c))down.insert(c);
            else up.insert(c);
        }
        char ans = '!';
        for(auto c : up) {
            if(down.contains(tolower(c))) ans = max(ans , c);
        }
       
        return ans != '!' ? string() + ans : "";
    }
};