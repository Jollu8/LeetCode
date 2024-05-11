class Solution {
public:
    vector<int> frequencySort(vector<int>& A) {
        unordered_map<int, int> mp;
        for(auto i: A) mp[i]++;
        sort(A.begin(), A.end(), [&](auto a, auto b) {
            if(mp[a] == mp[b]) return a > b;
            return mp[a] < mp[b];
        });
        return A;
 
    }
};