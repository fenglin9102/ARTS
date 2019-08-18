//
//  Binary Tree Inorder Traversal.hpp
//  94. Binary Tree Inorder Traversal
//
//  Created by 张枫林 on 2019/8/17.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Binary_Tree_Inorder_Traversal_hpp
#define Binary_Tree_Inorder_Traversal_hpp

#include <stdio.h>
/*
 Given a binary tree, return the inorder traversal of its nodes' values.
 
 Example:
 
 Input: [1,null,2,3]
 1
 \
 2
 /
 3
 
 Output: [1,3,2]
 Follow up: Recursive solution is trivial, could you do it iteratively?
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/binary-tree-inorder-traversal
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

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
    vector<int> inorderTraversal(TreeNode* root) {
        if (root) {
            inorderTraversal(root->left);
            res.push_back(root->val);
            printf("%d\n",root->val);
            inorderTraversal(root->right);
        }
        return res;
    }
    
    vector<int> inorderTraversalStackImp(TreeNode* root) {
        stack<TreeNode *> st;
        while (root) {
            st.push(root);
            root = root->left;
        }
        
        while (!st.empty()) {
            TreeNode *node = st.top();
            st.pop();
            res.push_back(node->val);
            TreeNode *tempNode = node->right;
            while (tempNode) {
                st.push(tempNode);
                tempNode = tempNode->left;
            }
        }
        return res;
    }
    
    
    void test();
    
    private:
    vector<int> res;
};
/*
 1. 递归
 2. 堆栈
 */

#endif /* Binary_Tree_Inorder_Traversal_hpp */
