//
//  Maximum Subarray.hpp
//  53. Maximum Subarray
//
//  Created by fenglin on 2019/8/21.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Maximum_Subarray_hpp
#define Maximum_Subarray_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxVal = INT_MIN;
        for (int i=0; i<nums.size(); i++) {
            int temp = nums[i];
            if (temp > maxVal) {
                maxVal = temp;
            }
            for (int j=i+1; j<nums.size(); j++) {
                if (temp + nums[j] > maxVal) {
                    maxVal = temp + nums[j];
                }
                temp += nums[j];
            }
        }
        return maxVal;
    }
    
    int maxSubArrayV2(vector<int>& nums) {
        int maxVal = nums[0];
        int sum = 0;
        for (auto num : nums) {
            if (sum > 0) {
                sum += num;
            }else{
                sum = num;
            }
            maxVal = max(maxVal, sum);
        }
        return maxVal;
    }
    void test();
};


#endif /* Maximum_Subarray_hpp */
