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
    void allpaths(TreeNode* node,vector<int> now,vector<vector<int>> &paths){
        now.push_back(node->val);
        if(node->left)allpaths(node->left,now,paths);
        if(node->right)allpaths(node->right,now,paths);
        if(!node->left && !node->right)paths.push_back(now);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> paths;
        allpaths(root,{},paths);
        vector<string> ans;
        for(vector<int> v:paths){
            string p=""+to_string(v[0]);
            for(int i=1;i<v.size();i++){
                p+="->";
                p+=to_string(v[i]);
            }
            ans.push_back(p);
        }
        return ans;
    }
};