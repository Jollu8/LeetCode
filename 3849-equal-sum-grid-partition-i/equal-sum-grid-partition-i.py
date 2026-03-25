class Solution:
    def canPartitionGrid(self, grid: List[List[int]]) -> bool:
        n = len(grid)
        m = len(grid[0])
        verticalSums = [0] * m
        horizontalSums = [0] * n

        for r in range(n):
            for c in range(m):
                val = grid[r][c]
                verticalSums[c] += val
                horizontalSums[r] += val
        
        def canPartition(sums):
            rightSum = sum(sums)
            leftSum = 0

            for n in sums:
                leftSum += n
                rightSum -= n
                if leftSum == rightSum:
                    return True
            return False

        return canPartition(verticalSums) or canPartition(horizontalSums)