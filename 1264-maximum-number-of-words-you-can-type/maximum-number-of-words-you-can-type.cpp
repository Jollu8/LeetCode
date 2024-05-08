class Solution {
public:
    int canBeTypedWords(string text, string s) {
        set<char>b;
        for(auto i : s)b.insert(i);

        int ans{};
        stringstream ss(text);
        string tok;
        while(ss >> tok) {
            bool check = true;
            for(auto c : tok) {
                if(b.contains(c)) {
                    check = false;
                    break;
                }
            }
            ans += (check) ? 1 : 0;
        }
        return ans;

    }
};