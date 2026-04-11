class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        has = defaultdict(list)
        for i, num in enumerate(nums):
            has[num].append(i)

        res = float('inf')
        for val, idxs in has.items():
            if len(idxs) < 3:
                continue
            for j in range(2, len(idxs)):
                dist = 2 * (idxs[j] - idxs[j - 2])
                res = min(res, dist)

        return res if res != float('inf') else -1

