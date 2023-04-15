// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array
#include<bits/stdc++.h>

class Solution {
public:
    int findMin(vector<int>& nums) {
    int l = 0;
    int u = nums.size() - 1;
    int m = 0;

    if (nums[l] <= nums[u]) {
        return nums[l];
    }

    while (l < u) {
        m = l + (u - l) / 2;

        if (m > l && nums[m] < nums[m-1]) {
            return nums[m];
        }

        if (m < u && nums[m] > nums[m + 1]) {
            return nums[m + 1];
        }

        if (nums[m] > nums[u]) {
            l = m + 1;
        } else {
            u = m - 1;
        }
    }

    return -1;      
    }
};