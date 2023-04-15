// https://leetcode.com/problems/missing-number
#include<bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;

        for (auto i : nums) {
            sum += i;
        }

        int n = nums.size();
        int sumAct = n * (n + 1) / 2;

        return sumAct - sum;
    }
};