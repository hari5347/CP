// https://leetcode.com/problems/4sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> out;
        set<vector<int>> uset;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                int l = j + 1;
                int r = nums.size() - 1;

                long int sum = nums[i] + nums[j];
                while (l < r) {
                    long int newsum = nums[l] + nums[r];
                    if (newsum + sum < target) {
                        l++;
                    } else if (newsum + sum > target){
                        r--;
                    } else {
                        vector<int> res = {nums[i], nums[j], nums[l], nums[r]};
                        uset.insert(res);
                        l++;
                    }
                } 
            }
        }

        for (auto s  : uset) {
            out.push_back(s);
        }

        return out;
    }
};