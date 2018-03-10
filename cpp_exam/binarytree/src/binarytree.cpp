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
    vector<int> res;
    if(root == NULL)
        return res;

    stack<TreeNode *> S1, S2;
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



