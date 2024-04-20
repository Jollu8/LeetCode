class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int n = a[0].size();
        int l{}, r = a.size()*n;

        while(l < r) {
            int m = (r+ l)/2;
            int x = a[m/n][m%n];
            if(x  < t) l = m+1;
            else if(x > t) r = m;
            else return true;
        }
        return false;
        
    }
};