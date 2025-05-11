/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* node,vector<int> &route){
        if(!node)return;
        inorder(node->left,route);
        route.push_back(node->val);
        inorder(node->right,route);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans={};
        inorder(root,ans);
        return ans;
    }
};