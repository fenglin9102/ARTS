//
//  Binary Tree Inorder Traversal.cpp
//  94. Binary Tree Inorder Traversal
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Binary Tree Inorder Traversal.hpp"

void Solution::test(){
    TreeNode *root = new TreeNode(1);
    TreeNode *right = new TreeNode(2);
    root->right = right;
    right->left = new TreeNode(3);
    inorderTraversal(root);
}
