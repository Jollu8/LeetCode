class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char> a(s.begin(), s.end());
        return  a.size() == 26;

        
    }
};