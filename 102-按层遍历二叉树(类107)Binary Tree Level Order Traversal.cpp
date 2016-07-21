Binary Tree Level Order Traversal
二叉树按层遍历，与107题的思路类似，只是不用再逆转了，具体代码如下：
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeLevel(root,0);
        return result;
    }
    void TreeLevel(TreeNode *root,int level){
        if(root==NULL){
            return;
        }
        if(level==result.size()){
            vector<int> v;
            result.push_back(v);
        }
        result[level].push_back(root->val);
        TreeLevel(root->left,level+1);
        TreeLevel(root->right,level+1);
    }
};
