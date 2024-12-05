/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void mytrail(TreeNode* node,TreeNode* find,vector<bool> myList,vector<bool> &path){
        if(!node || !path.empty())return;
        if(node==find){
            path=myList;
            return ;
        }
        myList.push_back(false);
        mytrail(node->left,find,myList,path);
        myList.pop_back();
        myList.push_back(true);
        mytrail(node->right,find,myList,path);
        myList.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<bool> ptrail;
        mytrail(root,p,{},ptrail);
        vector<bool> qtrail;
        mytrail(root,q,{},qtrail);
        int maxl=min(ptrail.size(),qtrail.size());
        TreeNode* ans=root;
        int i=0;
        while(i<maxl && ptrail[i]==qtrail[i]){
            if(!ptrail[i])ans=ans->left;
            else ans=ans->right;
            ++i;
        }
        return ans;
    }
};