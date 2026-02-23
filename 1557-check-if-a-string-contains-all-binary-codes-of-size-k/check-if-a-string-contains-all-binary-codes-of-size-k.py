class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        return len({*zip(*[s[i:]for i in range(k)])})>>k>0