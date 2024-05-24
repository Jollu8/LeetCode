class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> buf(n1+n2);
        int l{}, r{},i{};
        while(l < n1 && r < n2)
            buf[i++] = nums1[l] > nums2[r] ? nums2[r++] : nums1[l++];
        while(l < n1) buf[i++] = nums1[l++];
        while(r < n2) buf[i++] = nums2[r++];
        
        int m = buf.size() / 2;
        return buf.size()&1 ? buf[m] : (buf[m-1] + buf[m]) / 2.;

    }
};