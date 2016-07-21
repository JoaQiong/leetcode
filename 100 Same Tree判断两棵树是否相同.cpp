//Same Tree    由题意，利用递归算法可得代码如下：
class Solution {
public:
bool isSameTree(TreeNode* p, TreeNode* q) {
if(p==NULL&&q==NULL) return true;
if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL)) return false;
bool a,b;
a=isSameTree(p->left,q->left);
b=isSameTree(p->right,q->right);
if((a&&b==true)&&(p->val==q->val)) return true;
else return false;
}
};

/*
最开始没有考虑到p或q其中有一个为NULL，以为后面的递归能解决，导致提交错误。

二次提交仍然没有考虑到这个问题，导致Runtime Error.

三次仍然犯错！！！！！！！！！
*/
