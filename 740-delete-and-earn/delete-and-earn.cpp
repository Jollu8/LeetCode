class Solution {
   
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums) mp[i] += i;
        int t{}, s{};
        for(auto &p : mp) {
            if(!mp.contains(p.first-1)){
                s = t;
                t += p.second;
            }else{
                auto tmp = max(s+ p.second, t);
                s = t;
                t = tmp;
            }
        }
        return t;
    }
};