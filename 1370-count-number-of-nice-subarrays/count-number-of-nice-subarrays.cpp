#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


class Solution {
public:
    int numberOfSubarrays(vector<int>& n, int k) {
        int r{}, l{}, odd{}, ctr{}, ans{}, size = n.size();

        for(;r < size; ++r) {
            if(n[r]&1){
                ++odd;
                if(odd >= k) {
                    ctr = 1;
                    while(!(n[l++]&1)) ctr++;
                    ans += ctr;
                }
            }else if(odd >= k) ans +=ctr;
        } 
        return ans;
        
    }
};