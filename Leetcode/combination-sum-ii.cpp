// https://leetcode.com/problems/combination-sum-ii
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

        for(int j = i; j < candidates.size(); j++) {
            if(j > i && candidates[j] == candidates[j-1]) 
                continue;
            
            if(candidates[j] > sum) 
                break;
            
            temp.push_back(candidates[j]);
            findCombinationSum(candidates, sum - candidates[j], j + 1, temp, res);
            temp.pop_back();
        }

        return;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        set<vector<int>> res;

        sort(candidates.begin(), candidates.end());
        findCombinationSum(candidates, target, 0, temp, res);
        vector<vector<int>> out;
        for (auto i : res) {
            out.push_back(i);
        }
        
        return out;
    }
};