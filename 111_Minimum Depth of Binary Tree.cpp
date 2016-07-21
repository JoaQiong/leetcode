/*
Minimum Depth of Binary Tree
由题意找出二叉树的最小深度值，一上来就递归写出了如下代码：

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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return min(minDepth(root->left)+1,minDepth(root->right)+1);
    }
};

//提交出现[1,2]时预期是2，我输出的是1，再仔细阅读题目发现是找出从根节点出发到
//离它最近的一个叶子节点的最小深度，于是加了两个分支判断提交成功：
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left!=NULL&&root->right==NULL){
            return minDepth(root->left)+1;
        }else if(root->left==NULL&&root->right!=NULL){
            return minDepth(root->right)+1;
        }
        return min(minDepth(root->left)+1,minDepth(root->right)+1);
    }
};
