class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> buf;
        string t;
        while(ss >> t) buf.emplace_back(t);
        sort(buf.begin(), buf.end(), [](auto &a, auto &b){
            return a.back() < b.back();
        });
        string ans;
        for(auto &c : buf){
            ans += c.substr(0, c.size()-1) + " ";
        }
        return ans.substr(0, ans.size()-1);

    }
};