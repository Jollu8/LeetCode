class Solution {
public:
    bool uniqueOccurrences(vector<int>& A) {
        unordered_map<int, int> mp;
        for(auto i : A) mp[i]++;
        set<int>u;
        for(auto [a, b] : mp) {
            if(u.contains(b)) return false;
            else u.insert(b);
        }
        return true;
    }
};