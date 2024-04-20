class Solution {
    const int elite = 1337;

    int mypow(int x, int n) {
        int ans = 1;
        for (x %= elite; n--; ans = ans * x % elite);
        return ans;
    }

public:
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        int last_digit = b.back(); b.pop_back();
        return mypow(a, last_digit) * mypow(superPow(a, b), 10) % elite;
    }
};
