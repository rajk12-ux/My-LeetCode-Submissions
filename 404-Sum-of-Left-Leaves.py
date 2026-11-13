# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumOfLeftLeaves(self, root):
        if root is None:
            return 0

        sum = 0

        if root.left:
            if root.left.left is None and root.left.right is None:
                sum += root.left.val
            else:
                sum += self.sumOfLeftLeaves(root.left)

        sum += self.sumOfLeftLeaves(root.right)

        return sum