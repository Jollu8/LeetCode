class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:

        if k == 1:
            return 0

        nums.sort()
        ans = nums[k - 1] - nums[0]

        for i in range(0, len(nums) - k + 1):
            ans = min(ans, nums[i + k - 1] - nums[i])
        return ans
        