//
//  Path Sum.hpp
//  112. Path Sum
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Path_Sum_hpp
#define Path_Sum_hpp

#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
//    bool hasPathSum(TreeNode* root, int sum) {
//        return dfs(root, sum);
//    }
//
//    bool dfs(TreeNode* root, int sum){
//        if(root == nullptr){
//            return false;
//        }
//        if(root->left == nullptr && root->right == nullptr && sum == 0){
//            return true;
//        }
//        dfs(root->left, sum-root->val);
//        dfs(root->right, sum-root->val);
//        return false;
//    }
    void test();
};


#endif /* Path_Sum_hpp */
