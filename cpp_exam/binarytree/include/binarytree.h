#ifndef BINARY_TREE
#define BINARY_TREE

#include<vector>

struct TreeNode{
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTree{
public:
    std::vector<char> preorderTraversal(TreeNode *root);
    void createBinaryTree(TreeNode* &root);
};

#endif //BINARY_TREE
