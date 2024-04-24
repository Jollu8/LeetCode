class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans;
        ans.reserve(w1.size() + w2.size());
        auto a = w1.begin(), b = w2.begin();

        while (a != w1.end() && b != w2.end())ans.push_back(*a++), ans.push_back(*b++);
        while (a != w1.end()) ans.push_back(*a++);
        while (b != w2.end()) ans.push_back(*b++);

        return ans;
    }
};