class Solution {
public:
    int fourSumCount(vector<int> &n1, vector<int> &n2, vector<int> &n3, vector<int> &n4) {
        unordered_map<int, int> a, b;
        for (auto i: n1) {
            for (auto j: n2) a[i + j]++;
        }

        for (auto i: n3) {
            for (auto j: n4) b[i + j]++;
        }

        int ans{};
        for (auto [a1,a2]: a) {
            if (b.count(-a1)) {
                ans += a2 * b[-a1];
            }
        }
        return ans;
    }
};

