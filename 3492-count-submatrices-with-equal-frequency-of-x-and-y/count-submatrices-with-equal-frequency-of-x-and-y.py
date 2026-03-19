class Solution:
 def numberOfSubmatrices(self, grid: List[List[str]]) -> int:
 
     m, n = len(grid), len(grid[0])

     sum_grid = [[0]*n for i in range(m)]
     x_count = [[0]*n for i in range(m)]

     for i in range(m):
         for j in range(n):
             val = 0
             if grid[i][j] == 'X':
                 val = 1
             elif grid[i][j] == 'Y':
                 val = -1

             sum_grid[i][j] = val
             x_count[i][j] = 1 if grid[i][j] == 'X' else 0

             if i > 0:
                 sum_grid[i][j] += sum_grid[i-1][j]
                 x_count[i][j] += x_count[i-1][j]

             if j > 0:
                 sum_grid[i][j] += sum_grid[i][j-1]
                 x_count[i][j] += x_count[i][j-1]

             if i > 0 and j > 0:
                 sum_grid[i][j] -= sum_grid[i-1][j-1]
                 x_count[i][j] -= x_count[i-1][j-1]

     ans = 0

     for i in range(m):
         for j in range(n):
             if sum_grid[i][j] == 0 and x_count[i][j] > 0:
                 ans += 1

     return ans