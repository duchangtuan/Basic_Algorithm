#include<iostream>
#include<stdio.h>
#include<stack>

#include"binarytree.h"
using namespace std;


std::vector<char> BinaryTree::preorderTraversal(TreeNode *root){
    std::vector<char> res;
    if(root == NULL)
        return res;
    std::stack<TreeNode*> S;
    S.push(root);
    while(!S.empty()){
        res.push_back(root->val);
        // to avoid that the right child is NULL
        if(root->right)
            S.push(root->right);
        if(root->left)
            S.push(root->left);
        else{
            root = S.top();
            S.pop();
        }
    }
    return res;
}

void BinaryTree::createBinaryTree(TreeNode* &T){
    char ch;
    if((ch=getchar()) == '#')
        T = NULL;
    else{
        T = new TreeNode(ch);
        BinaryTree::createBinaryTree(T->left);
        BinaryTree::createBinaryTree(T->right);
    }
}
