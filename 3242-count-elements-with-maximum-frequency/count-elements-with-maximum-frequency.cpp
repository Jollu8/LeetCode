class Solution {
public:
    int maxFrequencyElements(vector<int>& A) {
        unordered_map<int , int> mp;
        for(auto i : A) mp[i]++;
        int ans{}, m = INT_MIN;
        for(auto [a,b] : mp) m = max(m, b);
        for(auto [a, b] : mp) ans += (b == m) ? b : 0;
        
        return ans;
    }
};