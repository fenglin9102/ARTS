//
//  Evaluate Reverse Polish Notation.hpp
//  150. Evaluate Reverse Polish Notation
//
//  Created by 张枫林 on 2019/9/1.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Evaluate_Reverse_Polish_Notation_hpp
#define Evaluate_Reverse_Polish_Notation_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <stack>


using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;
        for (auto token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int right = s1.top();
                s1.pop();
                int left = s1.top();
                s1.pop();
                if (token == "+") {
                    s1.push(left + right);
                }else if (token == "-") {
                    s1.push(left - right);
                }else if (token == "*") {
                    s1.push(left * right);
                }else{
                    s1.push(left / right);
                }
            }else{
                s1.push(stoi(token));
            }
        }
        return s1.top();
    }
};

#endif /* Evaluate_Reverse_Polish_Notation_hpp */
