//
//  Binary Tree Level Order Traversal II.cpp
//  107. Binary Tree Level Order Traversal II
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Binary Tree Level Order Traversal II.hpp"

void Solution::test(){
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    TreeNode *right = new TreeNode(20);
    right->right = new TreeNode(7);
    right->left = new TreeNode(15);
    root->right = right;
    
    vector<vector<int>> res =  levelOrderBottom(root);
    printf("--");
}
