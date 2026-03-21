class Solution:
    def reverseSubmatrix(self, grid: List[List[int]], x: int, y: int, k: int) -> List[List[int]]:
        l = x
        r = l + k - 1

        while l <= r:
            l_row = grid[l]
            r_row = grid[r]
            for i in range(y, y + k):
                l_row[i], r_row[i] = r_row[i], l_row[i]
            l += 1
            r -= 1
        return grid