#ifndef BINARY_TREE
#define BINARY_TREE

#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTree{
public:
    //vector<int> preorderTraversal(TreeNode *root);
    vector< vector<int> > levelOrder(TreeNode *root);        
    vector<int> preorderTraversal(TreeNode *root);
    vector<int> preorderTraversal_recursive(TreeNode *root);
    vector<int> inorderTraversal(TreeNode *root);
    vector<int> inorderTraversal_recursive(TreeNode *root);
    vector<int> postorderTraversal1(TreeNode *root);
    vector<int> postorderTraversal2(TreeNode *root);
    int maxDepth_dfs(TreeNode *root);
    int maxDepth_bfs(TreeNode *root);

private:
    vector<int> res;
    void preorder(TreeNode *root);
    void inorder(TreeNode *root);
};

#endif //BINARY_TREE
