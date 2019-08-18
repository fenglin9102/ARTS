//
//  Convert Sorted Array to Binary Search Tree.cpp
//  108. Convert Sorted Array to Binary Search Tree
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Convert Sorted Array to Binary Search Tree.hpp"

void Solution::test(){
    vector<int> nums = {-10,-3,0,5,9,20};
    TreeNode *root = sortedArrayToBST(nums);
    printf("%d",root->val);
}
