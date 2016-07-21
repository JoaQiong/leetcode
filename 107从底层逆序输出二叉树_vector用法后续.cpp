Binary Tree Level Order Traversal II
题意要求我们按层访问二叉树后，并将每层放到一个数组里逆序输出：
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        levelTree(root,0);
        return vector<vector<int>>(result.rbegin(), result.rend());
    }
    void levelTree(TreeNode *root,int level){
        if(root==NULL){
            return;
        }
        if(level==result.size()){
            vector<int> v;
            result.push_back(v);
        }
        result[level].push_back(root->val);
        levelTree(root->left,level+1);
        levelTree(root->right,level+1);
    }
};
/*
蓝色为题目给出的函数，刚开始看到这样的vector不会用，后来理解一下也跟二维数组类似，这里只是将vector<int> v作为result的数据，相当于每一个level就是一个vector，
每一层的数据均放到该层对应的level容器中，最后通过vector<vector<int>>(result.rbegin(), result.rend())逆序输出result里的内容。这里result.rbegin()指向倒数第一个数据，相当于翻转了result。
*/
