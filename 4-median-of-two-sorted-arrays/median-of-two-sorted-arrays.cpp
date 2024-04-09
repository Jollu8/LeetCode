class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int> buf(n1.size() + n2.size());
        int i{}, j{}, k{};
        while (i < n1.size() && j < n2.size()) {
            if (n1[i] < n2[j])
                buf[k++] = n1[i++];
            else
                buf[k++] = n2[j++];
        }
        while (i < n1.size())
            buf[k++] = n1[i++];

        while (j < n2.size())
            buf[k++] = n2[j++];
       

        if ((buf.size() & 1))
            return buf[buf.size() / 2];
        auto x = buf.size()/2;
        return (buf[x] + buf[x-1])/2.;
    }
};