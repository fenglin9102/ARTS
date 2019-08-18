
//
//  Path Sum.cpp
//  112. Path Sum
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "Path Sum.hpp"
#include <string>

TreeNode* buildTreeNode(vector<string> nums){
    if (nums.size() == 0) {
        return nullptr;
    }
    vector<TreeNode *> nodes;
    for (auto num : nums) {
        if (num == "null") {
            nodes.push_back(nullptr);
        }else{
            nodes.push_back(new TreeNode(stoi(num)));
        }
    }
    for (int i=0; i< nodes.size() && i*2+2 < nodes.size(); i++) {
        TreeNode *node = nodes.at(i);
        if (node) {
            node->left = nodes.at(i*2+1);
            node->right = nodes.at(i*2+2);
        }
    }
    return nodes.front();
}

void Solution::test(){
    vector<string> nums = {"5","4","8","11","null","13","4","7","2"};
    TreeNode* root = buildTreeNode(nums);
    printf("%zd",root->val);
}
