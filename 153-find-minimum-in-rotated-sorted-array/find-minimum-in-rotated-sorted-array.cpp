class Solution {
public:
  int findMin(vector<int>& n) {
    int l = 0, r = n.size()-1;
    int ans = INT_MAX;
    while(l <= r) {
        int m = (l+r)/2;
        if(n[l] <= n[m]){
            ans = min(ans, n[l]);
            l = m+1;
        }else{
            ans = min(ans, n[m]);
            r = m-1;
        }
    }
    return ans;
}


};