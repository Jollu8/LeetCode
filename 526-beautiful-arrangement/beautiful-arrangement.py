class Solution:
    def countArrangement(self, n: int) -> int:
        def genPermutation(start: int, comb: List[int]):
            if start == n:
                self.count += 1
                return
            for i in range(start, n + 1):
                if comb[i] % (start + 1) == 0 or (start + 1) % comb[i] == 0:
                    comb[start], comb[i] = comb[i], comb[start]
                    genPermutation(start + 1, comb)
                    comb[start], comb[i] = comb[i], comb[start]
        self.count = 0
        genPermutation(1, [i for i in range(n + 1)])
        return self.count
