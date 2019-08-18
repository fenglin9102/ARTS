//
//  Sum of Left Leaves.hpp
//  404. Sum of Left Leaves
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Sum_of_Left_Leaves_hpp
#define Sum_of_Left_Leaves_hpp

#include <stdio.h>


#include <vector>
#include <queue>
/*
 Find the sum of all left leaves in a given binary tree.
 
 Example:
 
 3
 / \
 9  20
 /  \
 15   7
 
 There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/sum-of-left-leaves
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
    public:
    int sumOfLeftLeaves(TreeNode* root) {
        int result=0;
        dfs(root, 0, result);
        return result;
    }
    
    void dfs(TreeNode* root, int level, int& result){
        if (root == nullptr) {
            return;
        }
        // 写好终止条件
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            result += root->left->val;
        }
        dfs(root->left, level + 1, result);
        dfs(root->right, level + 1, result);
    }
    
    void test();
};

/*
 分析
 
 DFS
 
 */
#endif /* Sum_of_Left_Leaves_hpp */
