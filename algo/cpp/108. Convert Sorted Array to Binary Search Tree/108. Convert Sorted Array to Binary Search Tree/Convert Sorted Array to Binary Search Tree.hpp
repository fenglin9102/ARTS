//
//  Convert Sorted Array to Binary Search Tree.hpp
//  108. Convert Sorted Array to Binary Search Tree
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Convert_Sorted_Array_to_Binary_Search_Tree_hpp
#define Convert_Sorted_Array_to_Binary_Search_Tree_hpp

#include <stdio.h>


/*
 Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
 
 For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
 
 Example:
 
 Given the sorted array: [-10,-3,0,5,9],
 
 One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
 
 0
 / \
 -3   9
 /   /
 -10  5
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) {
            return nullptr;
        }
        if (nums.size() == 1) {
            return new TreeNode(nums.front());
        }
        size_t mid = (nums.size())/2;
        TreeNode *root = new TreeNode(nums.at(mid));
        vector<int> leftNums = vector<int>(nums.begin(), nums.begin()+mid);
        vector<int> rightNums = vector<int>(nums.begin()+mid+1,nums.end());
        root->left = sortedArrayToBST(leftNums);
        root->right = sortedArrayToBST(rightNums);
        return root;
    }
    
    void test();
};

// 使用递归来实现
// 1. 先确定根节点
// 2. 然后把小于根节点的继续排序
// 3. 把大于根节点的继续排序





#endif /* Convert_Sorted_Array_to_Binary_Search_Tree_hpp */
