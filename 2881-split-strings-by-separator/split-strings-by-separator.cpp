class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& A, char sep) {
        vector<string> ans;
        for(auto &v : A) {
            string token;
            stringstream ss(v);
            while(getline(ss, token, sep))
            if(!token.empty())
                ans.emplace_back(token);
        }
        return ans;
        
    }
};
