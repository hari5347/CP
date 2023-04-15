// https://leetcode.com/problems/product-of-array-except-self
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> presum;
        vector<int> postsum;
        vector<int> answer;

        int p1 = 1;
        int p2 = 1;
        for (int  i = 0; i < nums.size(); i++) {
            presum.push_back(p1);
            p1 = p1 * nums[i];
            postsum.push_back(p2);
            p2 = p2 * nums[nums.size() - i - 1];
        }

        reverse(postsum.begin(), postsum.end());
        for(int i = 0; i < nums.size(); i++){
            answer.push_back(presum[i] * postsum[i]);
        }

        return answer;
    }
};