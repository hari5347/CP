// https://leetcode.com/problems/3sum-closest
#include<bits/stdc++.h>

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int l;
    int r;
    int sum;  
    int tsum = 1000000000;
    vector <vector<int>> res;

    sort(nums.begin(), nums.end()); // [0 1 1 1]
    for (int i = 0; i < nums.size(); i++) {

        l = i + 1;
        r = nums.size() - 1;        

        while (l < r) {
            sum = nums[i] + nums[l] + nums[r];
            if (abs(target - sum) < abs(target - tsum)) {
                tsum = sum;
            }

            if (sum < target) {
                l = l + 1;
            } else if (sum > target) {
                r = r - 1;
            } else {
                return sum;
            }
        }   
    }

    return tsum;
    }
};