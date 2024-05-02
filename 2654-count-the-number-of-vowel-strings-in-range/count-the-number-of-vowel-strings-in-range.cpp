class Solution {
public:
    int vowelStrings(vector<string>& A, int l, int r) {
        int ans{};
        unordered_set<char> u{'a','o', 'i', 'e', 'u'};

        for(int i = l; i <=r; ++i) {
            ans += (u.contains(A[i][0]) && u.contains(A[i].back())) ? 1 : 0;
        }
        return ans;
        
    }
};