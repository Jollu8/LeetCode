class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans{}, l{}, r = h.size()-1;

        while(l < r) {
            ans = max(ans, min(h[l], h[r]) * (r-l));
            if(h[l] < h[r])++l;
            else --r;
        }
        return ans;
        
    }
};