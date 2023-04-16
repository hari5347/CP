// https://leetcode.com/problems/3sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    int l;
    int r;
    int sum;  
    vector <vector<int>> res;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) 
            continue;
        
        l = i + 1;
        r = nums.size() - 1;        

        while (l < r) {
            sum = nums[i] + nums[l] + nums[r];
            
            if (sum < 0) {
                l = l + 1;
            } else if (sum > 0) {
                r = r - 1;
            } else {
                vector <int> temp = {nums[i], nums[l], nums[r]};
                res.push_back(temp);
                l = l + 1;
                while (nums[l] == nums[l - 1] && l < r) {
                    l = l + 1;
                }
            }
        }   
    }

    return res;
}
};