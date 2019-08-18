//
//  Binary Tree Paths.cpp
//  257. Binary Tree Paths
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Binary Tree Paths.hpp"
void Solution::test(){
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(3);
    TreeNode *left = new TreeNode(2);
    left->right = new TreeNode(5);
    root->left = left;
    vector<string> res = this->binaryTreePaths(root);
    printf("a");
}
