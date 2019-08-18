//
//  Sum of Left Leaves.cpp
//  404. Sum of Left Leaves
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Sum of Left Leaves.hpp"

void Solution::test(){
    TreeNode *root = new TreeNode(3);
    TreeNode *right = new TreeNode(20);
    root->right = right;
    root->left = new TreeNode(9);
    right->left = new TreeNode(15);
    right->right = new TreeNode(7);
    
    sumOfLeftLeaves(root);
}
