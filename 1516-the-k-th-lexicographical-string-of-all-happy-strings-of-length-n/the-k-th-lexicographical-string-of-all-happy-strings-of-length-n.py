class Solution:
    def getHappyString(self, n: int, k: int) -> str:
        q = deque(["a", "b", "c"])
        ans = []

        while q:
            s = q.popleft()
            if len(s) == n:
                ans.append(s)
                continue
            for c in "abc":
                if s[-1] != c:
                    q.append(s + c)
        return "" if k > len(ans) else ans[k-1]

        