//
//  Binary Tree Level Order Traversal II.hpp
//  107. Binary Tree Level Order Traversal II
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Binary_Tree_Level_Order_Traversal_II_hpp
#define Binary_Tree_Level_Order_Traversal_II_hpp

#include <stdio.h>


/*
 
 Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
 
 For example:
 Given binary tree [3,9,20,null,null,15,7],
 3
 / \
 9  20
 /  \
 15   7
 return its bottom-up level order traversal as:
 [
 [15,7],
 [9,20],
 [3]
 ]
 
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <vector>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
    public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if (root) {
            q.push(root);
        }
        while (!q.empty()) {
            size_t size = q.size();
            vector<int> tempArray;
            for (int i=0; i<size; i++) {
                TreeNode *node = q.front();
                tempArray.push_back(node->val);
                q.pop();
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            res.push_back(tempArray);
        }
        // 反转数组
        reverse(res.begin(), res.end());
        return res;
    }
    
    void test();
};

#endif /* Binary_Tree_Level_Order_Traversal_II_hpp */
