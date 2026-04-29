class Solution:
    def maximumScore(self, grid: List[List[int]]) -> int:
        N = len(grid)
        if N == 1:
            return 0

        pref_cols = grid.copy()

                
        for j in range(N):
            for i in range(1, N):
                pref_cols[i][j] += pref_cols[i - 1][j]
        
        @cache
        def calc(j, cur_i, can_use):
            if j == N - 1:
                return 0

            score = 0
            if cur_i != -1:
                score = pref_cols[cur_i][j + 1]

            best = max(calc(j + 1, -1, 1), calc(j + 1, -1, 0) + score)
            if can_use:
                for nxt_i in range(N):
                    
                    if nxt_i > cur_i:
                        cur_score = pref_cols[nxt_i][j]
                        if cur_i != -1:
                            cur_score -= pref_cols[cur_i][j]

                        best = max(best, calc(j + 1, nxt_i, 1) + cur_score)
                        best = max(best, calc(j + 1, nxt_i, 0) + cur_score)

                    else:
                        best = max(best, calc(j + 1, nxt_i, 1))

                        nxt_score = pref_cols[cur_i][j + 1] - pref_cols[nxt_i][j + 1]
                        best = max(best, calc(j + 1, nxt_i, 0) + nxt_score)

            else:
                for nxt_i in range(N):

                    if nxt_i > cur_i:
                        best = max(best, calc(j + 1, nxt_i, 1))
                        best = max(best, calc(j + 1, nxt_i, 0))

                    else:
                        best = max(best, calc(j + 1, nxt_i, 1))
                        nxt_score = pref_cols[cur_i][j + 1] - pref_cols[nxt_i][j + 1]
                        best = max(best, calc(j + 1, nxt_i, 0) + nxt_score)

            return best
        best = max(calc(0, -1, 1), calc(0, -1, 0))

        for i in range(N):
            best = max(best, calc(0, i, 1))
            best = max(best, calc(0, i, 0))

        return best
