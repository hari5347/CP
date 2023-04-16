// https://leetcode.com/problems/combination-sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombinationSum(vector<int>& candidates, int sum, int i,
        vector<int>& temp, set<vector<int>>& res) {

        if (sum == 0) {
            res.insert(temp);
            return;
        }
        
        if (sum < 0 || i >= candidates.size())
            return;

        temp.push_back(candidates[i]);
        findCombinationSum(candidates, sum - candidates[i], i, temp, res);
        
        temp.erase(temp.end() - 1);
        findCombinationSum(candidates, sum, i + 1, temp, res);

        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        set<vector<int>> res;
        
        findCombinationSum(candidates, target, 0, temp, res);
        vector<vector<int>> out;
        for (auto i : res)
            out.push_back(i);

        return out;
    }
};