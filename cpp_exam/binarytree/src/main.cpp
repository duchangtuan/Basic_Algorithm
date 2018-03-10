#include<iostream>
#include<queue>
#include"binarytree.h"

using namespace std;

void delete_nodes(TreeNode *root){
    if(root == NULL)
        return;

    queue<TreeNode *> myQueue;
    myQueue.push(root);
    while(!myQueue.empty()){
        int level = myQueue.size();
        for(int i = 0; i < level; i++){
            root = myQueue.front();
            myQueue.pop();
            if(root->left)
                myQueue.push(root->left);
            if(root->right)
                myQueue.push(root->right);
        }
        delete root;
    }
}

void test_levelorder(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    BinaryTree b1;
    vector<vector<int> > res = b1.levelOrder(root);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    } 
    delete_nodes(root);
}

int main(int argc, char** argv){
    test_levelorder();
}
