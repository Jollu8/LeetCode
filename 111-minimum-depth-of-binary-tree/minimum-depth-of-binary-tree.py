# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 1
        l = 10 ** 9 + 7
        r = 10 ** 9 + 7
        if root.left:
            l = self.minDepth(root.left)
        if root.right:
            r = self.minDepth(root.right)
        return min(l, r) + 1
        