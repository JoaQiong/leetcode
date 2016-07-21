/*
Path Sum
由题意，对于给定的一个二叉树和一个sum值，判断是否存在一条从根节点到叶子节点的路径使其
所有的和等于sum值。分析后递归可得：

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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return false;
        }
        if(root->left==NULL&&root->right==NULL&&root->val==sum){
            return true;
        }          //判断是否到叶子节点
        return hasPathSum(root->left,sum-(root->val))||hasPathSum(root->right,sum-(root->val));
    }
};
