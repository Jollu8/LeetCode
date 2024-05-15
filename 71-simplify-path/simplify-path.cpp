class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        stack<string> st;
        string ans, dir;
        while(getline(ss, dir, '/')) {
            if(dir.empty() ||  dir == "." )continue;
            else if( dir == "..") {if(!st.empty()) st.pop();}
            else st.push(dir);
        }
        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }
        return ans.empty() ? "/" : ans;
    }
};