// https://leetcode.com/problems/remove-duplicates-from-sorted-array
#include<bits/stdc++.h>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> umap;

        for (auto n : nums) {
            umap[n] = 1;
        }

        int k = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (umap[nums[j]] != 0) {
                nums[k] = nums[j];
                k++;
                umap[nums[j]]--;
            }
        }

        return k;
    }   
};