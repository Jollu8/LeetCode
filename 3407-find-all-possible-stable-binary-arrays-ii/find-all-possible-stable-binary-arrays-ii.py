class Solution(object):
    def numberOfStableArrays(self, zero, one, lim):
        """
        :type zero: int
        :type one: int
        :type limit: int
        :rtype: int
        """
        mod = 10 ** 9 + 7
        dp0 = [[0]*(one+1) for _ in range(zero+1)]
        dp1 = [[0]*(one+1) for _ in range(zero+1)]

        for i in range(1, min(zero, lim) + 1):
            dp0[i][0] = 1
        
        for i in range(1, min(one, lim) + 1):
            dp1[0][i] = 1
        
        for i in range(1, zero + 1):
            for j in range(1, one + 1):
                dp0[i][j] = (dp0[i-1][j] + dp1[i-1][j]) % mod

                if i - lim - 1 >= 0:
                    dp0[i][j] = (dp0[i][j] - dp1[i-lim-1][j]) % mod
                dp1[i][j] = (dp0[i][j-1] + dp1[i][j-1]) % mod

                dp1[i][j] = (dp0[i][j-1] + dp1[i][j-1]) % mod
                if j-lim-1 >= 0:
                    dp1[i][j] = (dp1[i][j] - dp0[i][j-lim-1]) % mod
        return (dp0[zero][one] + dp1[zero][one]) % mod