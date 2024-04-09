class Solution {
public:
    int timeRequiredToBuy(vector<int>& n, int k) {
        int x{};
        for(int i = 0; i < n.size(); ++i) {
            if(i <= k) x += min(n[k], n[i]);
            else x += min(n[k]-1, n[i]);
        }
        return x;
    }
};