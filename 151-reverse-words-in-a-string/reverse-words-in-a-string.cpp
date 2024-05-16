class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        stringstream ss(s);
        string tok;
        string ans;
        while (ss >> tok) 
            ans = tok + " " + ans;
        
        ans.pop_back();
        return ans;  // Возвращает обработанную строку, а не исходную
    }
};