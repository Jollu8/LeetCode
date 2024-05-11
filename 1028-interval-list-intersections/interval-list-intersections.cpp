class Solution {
    using vvi = vector<vector<int>>;
public:
    auto intervalIntersection(vvi& A, vvi& B) {
        vvi ans;
        for (int i{}, j{}; i < A.size() && j < B.size(); A[i][1] < B[j][1] ? ++i : ++j) {
            auto s = max(A[i][0], B[j][0]);
            auto e = min(A[i][1], B[j][1]);
            if (s <= e) ans.push_back({s, e});
        }
        return ans;
    }
};