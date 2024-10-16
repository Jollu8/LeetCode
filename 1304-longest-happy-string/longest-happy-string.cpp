class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        std::vector<int> budgets = {a, b, c};
        std::vector<char> chars = {'a', 'b', 'c'};
        std::vector<int> indices = {0, 1, 2};
        std::string res = "";
        int prev = -1;

        while (true) {
            // Fast, hard-coded sort:
            if (budgets[indices[2]] > budgets[indices[0]]) std::swap(indices[0], indices[2]);
            if (budgets[indices[1]] > budgets[indices[0]]) std::swap(indices[0], indices[1]);
            if (budgets[indices[2]] > budgets[indices[1]]) std::swap(indices[1], indices[2]);

            int next = indices[0];
            int n;

            if (next != prev) {
                n = std::min(budgets[next], 2);
            } else {
                next = indices[1];
                n = std::min(budgets[next], 1);
            }

            if (!n) return res;
            prev = next;
            res += chars[next];
            if (n == 2) res += chars[next];
            budgets[next] -= n;
        }

        return res;
    }
};