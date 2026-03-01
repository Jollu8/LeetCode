class Solution(object):
    def concatenatedBinary(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 0
        ans = 0

        for i in range(1, n + 1):
            if i & (i - 1) == 0:
                left += 1
            ans = ((ans << left) | i) % (10 ** 9 + 7)
        return ans