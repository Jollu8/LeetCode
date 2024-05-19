class Solution {
public:
    int subarraySum(vector<int> &A, int k, int sum = 0) {
        unordered_map<int, int> mp;
        mp[0]++;
        for (int i{}, cnt{}; i < A.size(); ++i) {
            cnt += A[i];
            if (auto f = mp.find(cnt - k); f != mp.end()) sum += f->second;
            mp[cnt]++;
        }
        return sum;
    }
};