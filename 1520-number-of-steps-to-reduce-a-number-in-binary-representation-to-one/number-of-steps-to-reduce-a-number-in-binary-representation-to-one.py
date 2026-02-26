class Solution(object):
    def numSteps(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0

        while s != "1":
            if s[-1] == "0":
                s = s[:-1]
            else:
                s = bin(int(s, 2) + 1)[2:]
            ans += 1
        return ans
        