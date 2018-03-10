#include<iostream>
#include"binarytree.h"


void test_create(){
    TreeNode* T;
    BinaryTree b;
    b.createBinaryTree(T);

    std::cout<<"preorder travseral:"<<std::endl;
    std::vector<char> res = b.preorderTraversal(T);
    for(int i = 0; i < res.size(); i++)
        std::cout<<res[i]<<" ";
    std::cout<<std::endl;
}

int main(int argc, char** argv){
    test_create();
}
