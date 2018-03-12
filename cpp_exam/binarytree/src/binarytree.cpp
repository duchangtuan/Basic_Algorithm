#include<iostream>
#include<stdio.h>
#include<stack>
#include<queue>

#include"binarytree.h"
using namespace std;

/*
vector<int> res;

vector<int> BinaryTree::preorderTraversal(TreeNode *root){
    BinaryTree::preorder(root);
    return res;
}

void BinaryTree::preorder(TreeNode *root){
    
    if(root==NULL)
        return;
    res.push_back(root);
    preorder(root->left);
    preorder(root->right);
}
*/

vector<int> BinaryTree::preorderTraversal(TreeNode *root){
    vector<int> res;
    stack<TreeNode*> S;
    TreeNode *p = root;
    while(p!=NULL || !S.empty()){
        while(p != NULL){
            res.push_back(p->val);
            S.push(p);
            p = p->left;
        }
        if(!S.empty()){
            p = S.top();
            S.pop();
            p = p->right;
        }
    }
    return res;
}

vector<int> BinaryTree::inorderTraversal(TreeNode *root){
    vector<int> res;
    stack<TreeNode*> S;
    TreeNode *p = root;
    while(p != NULL || !S.empty()){
        while(p!=NULL){
            S.push(p);
            p = p->left;
        }
        if(!S.empty()){
            p = S.top();
            S.pop();
            res.push_back(p->val);
            p = p->right;
        }
    }
    return res;
}

vector<int> BinaryTree::postorderTraversal1(TreeNode *root){
    vector<int> res;
    stack<TreeNode*> S;
    TreeNode *prev = NULL;
    S.push(root);
    while(!S.empty()){
        TreeNode *node = S.top();

        if(!node)
            // node is a null, pop it from the stack
            S.pop();
        else if((!node->left && !node->right) || (prev && (prev == node->left || prev == node->right))){
            // if the node's left child and right child are all null, push the value to res and 
            // pop it from the stack.
            // or if prev node is current node's child node, if it have, all the child nodes of current node 
            // has been traversed. so it's time to traverse the father node.
            res.push_back(node->val);
            S.pop();
            prev = node;
        }else{
            S.push(node->right);
            S.push(node->left);
        }
    }
    return res;
}

vector<int> BinaryTree::postorderTraversal2(TreeNode *root){
    // use two stacks to realize postorderTraversal.
    vector<int> res;
    if(root == NULL)
        return res;

    stack<TreeNode *> S1, S2;
    // at the first, the root node pushed to S1, when S1 is not empty, pop the stack top node ban push to S2,
    // if the left child node or right child node is not null of poped node, then push the left child node
    // and right child node to S1. Until S1 is empty.
    TreeNode *temp = NULL;
    S1.push(root);

    while(!S1.empty()){
        temp = S1.top();
        S1.pop();
        if(temp->left != NULL)
            S1.push(temp->left);
        if(temp->right != NULL)
            S1.push(temp->right);
        S2.push(temp);
    }
    while(!S2.empty()){
        temp = S2.top();
        S2.pop();
        res.push_back(temp->val);
    }
    return res;
}

vector<vector<int> > BinaryTree::levelOrder(TreeNode *root){
    vector<vector<int> > res;
    if(root == NULL)
        return res;

    queue<TreeNode *> myQueue;
    TreeNode *temp = NULL;
    myQueue.push(root);
    while(!myQueue.empty()){
        int level = myQueue.size();
        vector<int> sub_res;
        for(int i = 0; i < level; i++){
            temp = myQueue.front();
            myQueue.pop();
            sub_res.push_back(temp->val);
            
            if(temp->left)
                myQueue.push(temp->left);
            if(temp->right)
                myQueue.push(temp->right);
        }
        res.push_back(sub_res);
    }
    return res;
}
int BinaryTree::maxDepth_dfs(TreeNode *root){
    // get the max depth of a binary tree
    // use DFS thinking
    if(root==NULL)
        return 0;
    int ldepth = maxDepth_dfs(root->left);
    int rdepth = maxDepth_dfs(root->right);
    return max(ldepth, rdepth) + 1;
}

int BinaryTree::maxDepth_bfs(TreeNode *root){
    // get the max depth of a binary tree
    if(root == NULL)
        return 0;
    queue<TreeNode *> myQueue;
    TreeNode *temp;
    int depth = 0;
    myQueue.push(root);
    while(!myQueue.empty()){
        int len = myQueue.size();
        for(int i = 0; i < len; i++){
            temp = myQueue.front();
            myQueue.pop();   
            if(temp->left)
                myQueue.push(temp->left);
            if(temp->right)
                myQueue.push(temp->right);
        }
        depth++;
    }
    return depth;
}


