# Definition for a binary tree node.
class TreeNode:
    __slots__ = 'val', 'left', 'right'

    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if root is None:
            return root
        root.left, root.right = self.invertTree(root.right), self.invertTree(root.left)
        return root
