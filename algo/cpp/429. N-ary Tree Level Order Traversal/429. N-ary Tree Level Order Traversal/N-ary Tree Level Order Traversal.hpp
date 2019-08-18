//
//  N-ary Tree Level Order Traversal.hpp
//  429. N-ary Tree Level Order Traversal
//
//  Created by 张枫林 on 2019/8/18.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef N_ary_Tree_Level_Order_Traversal_hpp
#define N_ary_Tree_Level_Order_Traversal_hpp

#include <stdio.h>

#include <vector>
#include <queue>

using namespace std;

class Node {
    
public:
    int val;
    vector<Node *>children;
public:
    Node(){};
    Node(int _val, vector<Node*> _children){
        val = _val;
        children = _children;
    }
};

class Solution {
    public:
//    BFS
    vector<vector<int>> levelOrder(Node *root){
        queue<Node *>q;
        if (root) {
            q.push(root);
        }
        vector<vector<int>> res;
        while (!q.empty()) {
            size_t size = q.size();
            vector<int> tempArr;
            for (int i=0; i<size; i++) {
                Node *front = q.front();
                q.pop();
                tempArr.push_back(front->val);
                for (int j =0; j<front->children.size(); j++) {
                    q.push(front->children.at(j));
                }
            }
            res.push_back(tempArr);
        }
        return res;
    }
//     DFS
    vector<vector<int>> levelOrderV2(Node *root){
        vector<vector<int>> res;
        dfs(root, 0, res);
        return res;
    }
    
    void dfs(Node *root, int level, vector<vector<int>>&res){
        if (root == nullptr) {
            return;
        }
        if (res.size() < level +1) {
            vector<int> arr = {};
            res.push_back(arr);
        }
        res[level].push_back(root->val);
        for (int i=0; i<root->children.size(); i++) {
            dfs(root->children.at(i), level+1, res);
        }
    }
};




#endif /* N_ary_Tree_Level_Order_Traversal_hpp */
