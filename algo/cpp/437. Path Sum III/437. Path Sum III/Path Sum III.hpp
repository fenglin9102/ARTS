//
//  Path Sum III.hpp
//  437. Path Sum III
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Path_Sum_III_hpp
#define Path_Sum_III_hpp


/*
 You are given a binary tree in which each node contains an integer value.
 
 Find the number of paths that sum to a given value.
 
 The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).
 
 The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.
 
 Example:
 
 root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8
 
 10
 /  \
 5   -3
 / \    \
 3   2   11
 / \   \
 3  -2   1
 
 Return 3. The paths that sum to 8 are:
 
 1.  5 -> 3
 2.  5 -> 2 -> 1
 3. -3 -> 11
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/path-sum-iii
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
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
    int pathSum(TreeNode* root, int sum) {
        
    }
};
#endif /* Path_Sum_III_hpp */
