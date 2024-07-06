class Solution {
public:
    int passThePillow(int n, int time) {
       int ans = 2*n-2;
       int x = time % ans;
       return 1 + ((x < n) ? x : ans -x);
    }
};