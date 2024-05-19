
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> a(26), b(26), ans;
        int n = s.size(), m = p.size();
        if(n < m) return {};
        for(int i = 0; i < m; ++i) {
            ++a[p[i] - 'a'];
            ++b[s[i] - 'a'];
        }
        if(a == b)ans.push_back(0);
        for(int i = m; i < n; ++i) {
            --b[s[i-m] - 'a'];
            ++b[s[i] - 'a'];

            if(a == b) ans.push_back(i-m+1);
        }
        return ans;

    }
};