class Solution:
    def binaryGap(self, n: int) -> int:
        ans = []
        left = bin(n).replace("0b", "")

        for i in range(len(left)):
            if left[i] == "1":
                ans.append(i)
        if len(ans) <= 1:
            return 0
        m = 0
        for i in range(len(ans) - 1):
            m = max(m, int(ans[i + 1]) - int(ans[i]))
        return m
        