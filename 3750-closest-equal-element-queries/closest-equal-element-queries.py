class Solution:
    def solveQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        hashmap = defaultdict(int)
        temp = nums + nums
        res = [float("inf")] * len(nums)
        n = len(nums)
        
        for i in range(len(temp)):
            if nums[i % n] in hashmap:
                if hashmap[nums[i % n]] == i % n:
                    continue

                
                j = hashmap[nums[i % n]]
                diff = abs(i - j)

                res[i % n] = min(diff, res[i % n])
                res[j] = min(diff, res[j])

            hashmap[nums[i % n]] = i % n

        ans = []

        for num in queries:
            ans.append(res[num] if res[num] != float("inf") else -1)

        return ans

