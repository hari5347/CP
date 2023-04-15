// https://leetcode.com/problems/longest-substring-without-repeating-characters
#include<bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int maxRes = 0;

    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);
        for (int k = i; k < n; k++) {
            if (visited[s[k]])
                break;

            maxRes = max(maxRes, k - i + 1);
            visited[s[k]] = true;
        }
    }

    return maxRes;     
    }
};