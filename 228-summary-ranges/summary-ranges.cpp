class Solution {
public:
    vector<string> summaryRanges(vector<int> &A) {
        using namespace std::string_literals;
        vector<string> ans;
        for (int l = 0, r = 0; r < A.size();) {
            while (r + 1 < A.size() && A[r] + 1 == A[r + 1])++r;
            if (r - l > 0)
                ans.emplace_back(to_string(A[l]) + "->"s + to_string(A[r++]));
            else ans.emplace_back(to_string(A[r++]));
            l = r;
        }
        return ans;

    }
};