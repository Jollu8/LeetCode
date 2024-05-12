class Solution {
public:
    int maximumCount(vector<int>& A) {
        int a{}, b{};
        for (auto i : A) {
            a += (i > 0) ? 1 : 0;
            b += (i < 0) ? 1 : 0;
        }
        return max(a, b);
        
    }
};