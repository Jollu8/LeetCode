class Solution:
  def distance(self, nums: List[int]) -> List[int]:
    d, res = defaultdict(list), [0] * len(nums)
    for i, num in enumerate(nums):
      d[num].append(i)
    for idxs in d.values():
      l = len(idxs)
      if l < 2: continue
      s, i = sum(idxs), 2 - l
      idx0 = idxs.pop(0)
      res[idx0] = s - l * idx0
      for idx in idxs:
        res[idx] = res[idx0] + i * (idx - idx0)
        i, idx0 = i + 2, idx
    return res
  