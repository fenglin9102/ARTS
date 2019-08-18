//
//  Binary Tree Level Order Traversal.cpp
//  102. Binary Tree Level Order Traversal
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Binary Tree Level Order Traversal.hpp"

void Solution::test(){
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    TreeNode *right = new TreeNode(20);
    right->right = new TreeNode(7);
    right->left = new TreeNode(15);
    root->right = right;
    vector<vector<int>> res =  this->levelOrder(root);
    printf("----");
}
