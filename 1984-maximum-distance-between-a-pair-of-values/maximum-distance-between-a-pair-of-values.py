class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        #Solution 3 Using 2 Pointers
        ans = 0
        i, j = 0, 0
        n = len(nums1)
        m = len(nums2)
        while(i<n and j<m):
            if nums1[i] > nums2[j]:
                i+=1
            else:
                ans = max(ans, j-i)
                j+=1
        return ans
