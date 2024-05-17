class Solution {
public:
    int strStr(string h, string n) {
        int ans = -1, ns = n.size();

        for (int i{}, j = ns - 1; j < h.size(); ++i, ++j) {
            int l{};
            for (int k = i; l < ns && (h[k] == n[l]);  ++k, ++l );
            if (l == ns) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};