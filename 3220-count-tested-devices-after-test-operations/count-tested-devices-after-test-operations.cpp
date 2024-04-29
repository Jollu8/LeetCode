class Solution {
public:
    int countTestedDevices(vector<int>& A) {
        int ans{};
        for(auto i : A) ans += i > ans;
        return ans;
    }
};