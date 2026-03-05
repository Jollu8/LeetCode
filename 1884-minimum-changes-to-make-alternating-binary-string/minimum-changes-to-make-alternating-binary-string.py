class Solution(object):
    def minOperations(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        return min(self.step(s, n, '0'), self.step(s, n, '1'))

    def step(self, s, n, c):
        ans = 0
        flag = True

        for i in range(n):
            if flag:
                if s[i] != c:
                    ans += 1
                flag = False
            else:
                if s[i] == c:
                    ans += 1
                flag = True
        return ans