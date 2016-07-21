/*
Invert binary tree
由题意，是需要反转一颗二叉树，再由二叉树的定义可知是采用链式存储结构，所以我们可以采用递归算法遍历并进行反转。
代码如下：
*/
struct TreeNode* invertTree(struct TreeNode* root) {
if(root==NULL)  return root;     //注意不要思维定式地排除左子树或右子数为空的情况
struct TreeNode* temp=root->left;//因为一个为空也需要反转
root->left=root->right;
root->right=temp;
invertTree(root->left);
invertTree(root->right);
return root;
}

若是采用非递归算法，则可以利用栈或队列实现
