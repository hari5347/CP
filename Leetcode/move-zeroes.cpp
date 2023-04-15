// https://leetcode.com/problems/move-zeroes
#include<bits/stdc++.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i;
        int k = 0;

        for (i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                swap(nums[i], nums[k++]);
        }

        return;
    }
};