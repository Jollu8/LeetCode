# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        ans = 0

        def dfs(node, n):
            n <<= 1
            n += node.val

            if not node.left and not node.right:
                nonlocal ans
                ans += n
                return
            if node.left:
                dfs(node.left, n)
            if node.right:
                dfs(node.right, n)
        dfs(root, 0)
        return ans
        