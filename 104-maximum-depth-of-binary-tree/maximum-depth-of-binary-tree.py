# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode], d = 0) -> int:
        if root is None:
            return 0
            
        l, r = 0, 0
        if root.left:
            l = self.maxDepth(root.left, d + 1)
        if root.right:
            r = self.maxDepth(root.right, d + 1)
        return 1 + max(l, r)
        