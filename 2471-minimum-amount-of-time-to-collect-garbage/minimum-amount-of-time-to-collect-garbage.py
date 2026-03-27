class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        ans = 0
        metal = paper = glass = False
        for i in range(len(garbage)-1, -1, -1):
            ans += len(garbage[i])
            if not metal: metal = 'M' in garbage[i]
            if not paper: paper = 'P' in garbage[i]
            if not glass: glass = 'G' in garbage[i]
            if i > 0: ans += travel[i-1] * (metal + paper + glass)
        return ans