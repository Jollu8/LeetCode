class Solution(object):
    def findKthBit(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        if n == 1:
            return "0"
        
        l = (1 << n) - 1
        mid = l // 2 + 1

        if k == mid:
            return "1"
        elif k < mid:
            return self.findKthBit(n - 1, k)
        else:
            bit = self.findKthBit(n - 1, l - k + 1)
            return "1" if bit != "1" else "0"