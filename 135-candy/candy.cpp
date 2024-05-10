class Solution {
public:
    int candy(vector<int> &A) {
        int n = A.size();
        vector<int> l(n, 1), r(n, 1);
        for (int i = 1; i < n; ++i) l[i] = (A[i] > A[i - 1]) ? l[i - 1] + 1 : l[i];
        for (int i = n - 2; i >= 0; --i) r[i] = (A[i] > A[i + 1]) ? r[i + 1] + 1 : r[i];
        return inner_product(l.begin(), l.end(), r.begin(), 0, plus<>(), [](int a, int b) {
            return max(a, b);
        });

    }
};

