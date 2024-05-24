class Solution {
public:
    string simplifyPath(string s) {
        string ans, t;
        stringstream ss(s);
        stack<string> st;
        
        while(getline(ss, t, '/')) {
            if(t.empty() || t == ".") continue;
            else if(t == ".."){if(!st.empty()) st.pop();}
            else st.push(t);
        }
        for(;!st.empty(); st.pop()) ans = "/" +  st.top() + ans;
        return ans.empty() ? "/" : ans;
    }
};