class Solution:
    def minimumDistance(self, word: str) -> int:
        m, n = 5, 6
        coordinates = []
        for i in range(m):
            for j in range(n):
                coordinates.append((i, j))

        def get_dist(a, b):
            if a == 26 or b == 26:
                return 0
            x, y = coordinates[a], coordinates[b]
            return abs(x[0] - y[0]) + abs(x[1] - y[1])

        dp = [[[float("inf")] * 27 for i in range(27)] for _ in range(len(word))]

        def dfs(letter1, letter2, cur_pos):
            if cur_pos == len(word):
                return 0
            if dp[cur_pos][letter1][letter2] != float("inf"):
                return dp[cur_pos][letter1][letter2]
            dp[cur_pos][letter1][letter2] = min(
                get_dist(letter1, ord(word[cur_pos]) - ord("A"))
                + dfs(ord(word[cur_pos]) - ord("A"), letter2, cur_pos + 1),
                get_dist(letter2, ord(word[cur_pos]) - ord("A"))
                + dfs(letter1, ord(word[cur_pos]) - ord("A"), cur_pos + 1),
            )
            return dp[cur_pos][letter1][letter2]

        return dfs(26, 26, 0)
