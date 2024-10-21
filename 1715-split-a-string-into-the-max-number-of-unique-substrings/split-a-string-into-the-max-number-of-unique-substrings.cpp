class Solution {
    unordered_set<string> buf;

public:
    int maxUniqueSplit(string s, int ans = 0) {
        function<void(int)> bkg = [&](int ind) {
            if (ind == s.size()) {
                ans = max(ans, (int)buf.size());
                return;
            }
            string str;
            for (int i = ind; i < s.size(); ++i) {

                if (!buf.contains(str += s[i])) {
                    buf.emplace(str);
                    bkg(i + 1);
                    buf.erase(str);
                }
            }
        };
        bkg(0);

        return ans;
    }
};