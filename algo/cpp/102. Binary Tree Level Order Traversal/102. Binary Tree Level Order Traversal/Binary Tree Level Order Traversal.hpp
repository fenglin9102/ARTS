//
//  Binary Tree Level Order Traversal.hpp
//  102. Binary Tree Level Order Traversal
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Binary_Tree_Level_Order_Traversal_hpp
#define Binary_Tree_Level_Order_Traversal_hpp
/*
 Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
 
 For example:
 Given binary tree [3,9,20,null,null,15,7],
 3
 / \
 9  20
    /  \
    15   7
 return its level order traversal as:
 [
 [3],
 [9,20],
 [15,7]
 ]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/binary-tree-level-order-traversal
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
#include <queue>
#include <map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

typedef pair<TreeNode*, int> TreeNodeLevel;

class Solution {
    public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNodeLevel> q;
        vector<int> data;
        if (root) {
            q.push(pair<TreeNode*, int>{root, 0});
        }
        int defaultLevel = 0;
        while (!q.empty()) {
            pair<TreeNode*, int> item = q.front();
            q.pop();
            TreeNode *node =item.first;
            int level = item.second;
            if (node->left) {
                q.push(TreeNodeLevel{node->left, level+1});
            }
            if (node->right) {
                q.push(TreeNodeLevel{node->right, level+1});
            }
            if (defaultLevel != level) {
                res.push_back(data);
                defaultLevel = level;
                data.clear();
            }
            data.push_back(node->val);
        }
        if (!data.empty()) {
            res.push_back(data);
        }
        return res;
    }
    
    // BFS
    void test();
    
};

// BFS 遍历

// DFS 遍历 每一层先放个数组






#endif /* Binary_Tree_Level_Order_Traversal_hpp */


