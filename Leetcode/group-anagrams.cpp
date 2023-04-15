// https://leetcode.com/problems/group-anagrams
#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        map<vector<int>, vector<string>> umap;

        for (auto str : strs) {
            vector<int> temp (26, 0);
            for (auto ch : str) {
                temp[ch - 'a']++;
            }
            umap[temp].push_back(str);
        }

        for (auto i = umap.begin(); i != umap.end(); i++) {
            out.push_back(i->second);
        }

        return out;
    }
};