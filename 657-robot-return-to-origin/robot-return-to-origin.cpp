class Solution {
public:
    bool judgeCircle(string S) {
        unordered_map<char, int> mp;
        for(auto c: S) mp[c] ++;
        return mp['U'] == mp['D'] && mp['L'] == mp['R'];
    }
};
