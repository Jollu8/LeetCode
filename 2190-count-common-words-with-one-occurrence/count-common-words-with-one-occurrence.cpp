class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string, int> mp1, mp2;
        for (auto& i : w1)
            mp1[i]++;
        for (auto& i : w2)
            mp2[i]++;
        int ans{};
        for (auto& [a, b] : mp1)
            ans += (mp2[a] == 1 && b == 1) ? 1 : 0;

        return ans;
    }
};