class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string, int> mp;
        for (auto& i : w1)
            mp[i]++;
        for (auto& i : w2)
            mp[i] = (mp[i] == 1) ? -1 : 0;
        
        return count_if(mp.begin(), mp.end(), [](auto &a) {return a.second == -1;});
    }
};