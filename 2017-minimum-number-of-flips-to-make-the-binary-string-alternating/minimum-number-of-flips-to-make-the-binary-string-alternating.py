class Solution(object):
    def minFlips(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        s += s
        ans = sys.maxint
        check1, check2 = 0, 0

        s1 = ""
        s2 = ""

        for i in range(len(s)):
            if i % 2 == 0:
                s1 += "1"
                s2 += "0"
            else:
                s1 += "0"
                s2 += "1"
        
        for i in range(len(s)):
            if s[i] != s1[i]:
                check1 += 1
            if s[i] != s2[i]:
                check2 += 1
         
            if i >= n:
                if s[i-n] != s1[i-n]:
                    check1 -= 1
                if s[i-n] != s2[i-n]:
                        check2 -= 1
            if i >= n - 1:
                ans = min([ans, check1, check2])
        return ans
            