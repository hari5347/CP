// https://leetcode.com/problems/permutations
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findPermutations(vector<int>& nums, vector<vector<int>>& res,
        int i) {

        if (i == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for (int j = i; j < nums.size(); j++) {
            swap(nums[j], nums[i]);
            findPermutations(nums, res, i + 1);
            swap(nums[j], nums[i]);
        }

        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> out;

        findPermutations(nums, out, 0);
        return out;
    }
};