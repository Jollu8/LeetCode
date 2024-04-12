using L = long;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int> &n, int k, int t) {
        set < L > w;

        for (auto i = 0l; i < n.size(); ++i) {
            if (i > k)
                w.erase(n[i - k - 1]);
            if (auto pos = w.lower_bound((L) n[i] - (L) t);
                    pos != w.end() && std::abs(*pos - n[i]) <= t)
                return true;
            w.insert(n[i]);
        }

        return false;
    }
};