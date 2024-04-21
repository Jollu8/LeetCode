class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int> buf(n1.size() + n2.size());
        int l{},r{};
        int index{};
        while(l < n1.size() && r < n2.size()) {
            
            buf[index++] = (n1[l] < n2[r]) ? n1[l++] : n2[r++];
        }

        while(l < n1.size()) buf[index++] = n1[l++];
        while(r < n2.size()) buf[index++] = n2[r++];

        int m = buf.size()/2;

        if(buf.size()&1) return buf[m];
        return (buf[m-1] + buf[m])/(double)2;
    }
};