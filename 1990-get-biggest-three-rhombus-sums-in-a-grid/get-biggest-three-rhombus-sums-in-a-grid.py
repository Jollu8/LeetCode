class Solution:
    def getBiggestThree(self, grid: List[List[int]]) -> List[int]:
        candidates = SortedSet([
            d for row in grid for d in row
        ])
        m, n = len(grid), len(grid[0])
        
        def addRhombusSums(row: int, col: int) -> None:
            top = grid[row][col]
            left, right = col - 1, col + 1
            while left > -1 and right < n:
                row += 1
                top += grid[row][left] + grid[row][right]
                s = top
                bot_row, bot_left, bot_right = row + 1, left + 1, right - 1
                while bot_left != bot_right and bot_row < m:
                    s += grid[bot_row][bot_left] + grid[bot_row][bot_right]
                    bot_left += 1
                    bot_right -= 1
                    bot_row += 1
                if bot_left != bot_right or bot_row == m:
                    break
                s += grid[bot_row][bot_left]
                left -= 1
                right += 1
                candidates.add(s)

        for i in range(m - 2):
            for j in range(1, n - 1):
                addRhombusSums(i, j)

        return candidates[-3:][::-1]