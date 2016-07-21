Balanced Binary Tree
判断一棵树是否为平衡二叉树，只要每棵子树的高度不超过1即可：
class Solution {
public:
bool isBalanced(TreeNode* root) {
if(root==NULL)
return true;
int ld,rd;
ld=depth(root->left);
rd=depth(root->right);
if(ld-rd>1||rd-ld>1)
return false;
else
{
bool left,right;
left=isBalanced(root->left);
right=isBalanced(root->right);
return left&&right;
}

}
int depth(TreeNode *root)  //自定义一个函数读取一棵树的深度
{
if(root==NULL)
return 0;
int l=depth(root->left);   //默认根不为空，深度已经为1了
int r=depth(root->right);
if(l>=r)
return l+1;
else
return r+1;
}

};
