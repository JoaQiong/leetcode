Maximum Depth of Binary Tree
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
由二叉树的结点结构体类型定义可知，val变量是用来记录当前结点的深度，另有左右结点
所以采用递归算法能得到如下代码：
class Solution {
public:
int maxDepth(TreeNode* root) {
if(root==NULL)return 0;
return  max(maxDepth(root->left),maxDepth(root->right))+1;  //加上根节点的深度
}
};
