class Solution {
public:
    int unequalTriplets(vector<int>& A) {

        int ans{};
        for (int i = 0; i < A.size() - 2; ++i)
            for (int j = i + 1; j < A.size() - 1; ++j)
                for (auto k = j + 1; k < A.size(); ++k)
                    ans += (A[i] != A[j] && A[i] != A[k] && A[k] != A[j]) ? 1 : 0;
        return ans;
    }
};