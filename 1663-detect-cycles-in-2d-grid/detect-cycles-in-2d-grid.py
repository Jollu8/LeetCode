class Solution:
    def containsCycle(self, grid: List[List[str]]) -> bool:
        m, n = len(grid), len(grid[0])
        visited = set()

        def dfs(r, c, pr, pc, char):
            visited.add((r, c))
            
            for dr, dc in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
                nr, nc = r + dr, c + dc
                
                if 0 <= nr < m and 0 <= nc < n and grid[nr][nc] == char:
                    if (nr, nc) in visited and (nr, nc) != (pr, pc):
                        return True
                    if (nr, nc) not in visited:
                        if dfs(nr, nc, r, c, char):
                            return True
            return False
        for i in range(m):
            for j in range(n):
                if (i, j) not in visited:
                    if dfs(i, j, -1, -1, grid[i][j]):
                        return True
        return False
