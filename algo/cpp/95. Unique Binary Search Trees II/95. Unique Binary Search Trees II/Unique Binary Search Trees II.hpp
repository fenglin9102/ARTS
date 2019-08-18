//
//  Unique Binary Search Trees II.hpp
//  95. Unique Binary Search Trees II
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Unique_Binary_Search_Trees_II_hpp
#define Unique_Binary_Search_Trees_II_hpp

#include <stdio.h>

/*
 Given an integer n, generate all structurally unique BST's (binary search trees) that store values 1 ... n.
 
 Example:
 
 Input: 3
 Output:
 [
   [1,null,3,2],
   [3,2,null,1],
   [3,1,null,null,2],
   [2,1,3],
   [1,null,2,null,3]
 ]
 Explanation:
 The above output corresponds to the 5 unique BST's shown below:
 
 1         3     3      2      1
 \       /     /      / \      \
 3     2     1      1   3      2
 /     /       \                 \
 2     1         2                 3
 
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/unique-binary-search-trees-ii
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
    vector<TreeNode*> generateTrees(int n) {
        return {};
    }
};


#endif /* Unique_Binary_Search_Trees_II_hpp */
