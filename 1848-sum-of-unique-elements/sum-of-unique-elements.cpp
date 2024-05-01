class Solution {
public:
    int sumOfUnique(vector<int>& A) {
        map<int, int> mp;
        for(auto i : A) mp[i]++;
        int ans{};
        for(auto [a, b] : mp) ans += (b ==1)? a : 0;
        return ans;
    }
};