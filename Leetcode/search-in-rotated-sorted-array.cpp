// https://leetcode.com/problems/search-in-rotated-sorted-array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int u = nums.size() - 1;
        int m = 0;

        while (l <= u) {
            m = l + (u - l) / 2;

            if (nums[m] == target) {
                return m;
            }

            if (nums[m] <= nums[u]) {
                if (target >= nums[m] && target <= nums[u])
                    l = m + 1;
                else 
                    u = m - 1;
            } else {
                if (target >= nums[l] && target <= nums[m])
                    u = m - 1;
                else 
                    l = m + 1; 
            }
        }

    return -1;
    }
};