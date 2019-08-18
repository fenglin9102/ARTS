//
//  Binary Tree Paths.hpp
//  257. Binary Tree Paths
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Binary_Tree_Paths_hpp
#define Binary_Tree_Paths_hpp

#include <stdio.h>

#include <vector>
#include <string>

/*
 Given a binary tree, return all root-to-leaf paths.
 
 Note: A leaf is a node with no children.
 
 Example:
 
 Input:
 
 1
 /   \
 2     3
 \
 5
 
 Output: ["1->2->5", "1->3"]
 
 Explanation: All root-to-leaf paths are: 1->2->5, 1->3
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/binary-tree-paths
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

// 使用DFS
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
    public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res = {};
        dfs(root, res, "");
        return res;
    }
    void dfs(TreeNode *root, vector<string> &result, string s){
        if (root == nullptr) {
            return;
        }
        if (!root->left && !root->right) {
            result.push_back(s + to_string(root->val));
        }
        if (root->left) {
            dfs(root->left, result, s + to_string(root->val) + "->" );
        }
        
        if (root->right) {
            dfs(root->right, result, s + to_string(root->val) + "->" );
        }
        
    }
    void test();
};


#endif /* Binary_Tree_Paths_hpp */
