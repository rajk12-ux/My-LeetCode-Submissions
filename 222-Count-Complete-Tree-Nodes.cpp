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
    void count_n(TreeNode* node,int &total){
        if(!node)return;
        ++total;
        count_n(node->left,total);
        count_n(node->right,total);
    }
    int countNodes(TreeNode* root) {
        int c=0;
        count_n(root,c);
        return c;
    }
};