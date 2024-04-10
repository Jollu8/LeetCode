class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> mp;
        
        for(int i  = 0 ; i < n.size(); ++i){
            if(!mp.contains(t-n[i])) mp[n[i]] = i;
            else return {mp[t-n[i]], i};
        }
        return {-1,-1};
    }
};