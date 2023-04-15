// https://leetcode.com/problems/longest-consecutive-sequence
#include<bits/stdc++.h>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> umap;

        for (auto n : nums) {
            umap.insert({n, true});
        }

        int i = 0;
        int maxLength = 0;
        int len = 0;
        while (i < nums.size()) {
            if (!umap[nums[i] - 1]) {
                len = 0;
                while (umap[nums[i] + len]) {
                    len++;
                }    
                maxLength = max(maxLength, len);            
            }
            i++;
        }

        return maxLength;
    }
};