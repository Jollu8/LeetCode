class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n.size(); ++i) {
            if(mp.contains(t-n[i])) return {i, mp[t-n[i]]};
            else mp[n[i]] = i;
        }
        return {-1,-1};
    }
};