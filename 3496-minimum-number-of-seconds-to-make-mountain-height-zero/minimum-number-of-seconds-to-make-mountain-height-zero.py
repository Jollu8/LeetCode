class Solution:
    def minNumberOfSeconds(self, mountainHeight: int, workerTimes: List[int]) -> int:
        def try_finish(time):
            total = 0

            for t in workerTimes:
                k = int((math.sqrt(1 + 8 * (time // t)) - 1) // 2)
                total += k

                if total >= mountainHeight:
                    return True

        l, r = 1, 5000050000000001

        while l < r:
            mid = (l + r) // 2

            if try_finish(mid):
                r = mid
            else:
                l = mid + 1
        return l
        