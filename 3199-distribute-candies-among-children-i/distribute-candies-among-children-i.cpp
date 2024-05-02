class Solution {
public:
    int distributeCandies(int n, int t) {
        set<vector<int>> u;
        for (int i = 0; i <= t; ++i)
            for (int j = 0; j <= t; ++j)
                for (int k = 0; k <= t; ++k)
                     if(i + j + k == n)u.insert({i,j,k}), std::cout << i << " " << j << " " << k << ", ";

        return u.size();
    }
};