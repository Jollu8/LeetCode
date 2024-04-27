class Solution {
public:
    int numSquares(int n) {
        queue<int> q({n});
        int ans{};

        while (!q.empty()) {
            int size = q.size();
            ans++;
            while (size--) {
                int cur = q.front();
                q.pop();
                for (int i = 0; i * i <= cur; ++i) {
                    int sub = cur - i * i;
                    if (!sub)
                        return ans;
                    q.push(sub);
                }
            }
        }
        return 0;
    }
};