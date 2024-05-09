class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end(), [](auto a, auto b) {return a > b;});
        long long ans  = h[0];
        int cnt = 1;
        --k;
        for(int i = 1; i < h.size() && k > 0; ++i) {
            if((long long)h[i]- cnt > 0) {
                ans  += h[i]-cnt;
                ++cnt;
                --k;
            }
         
        }
        return ans;
    }
};