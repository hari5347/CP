// https://leetcode.com/problems/longest-repeating-character-replacement
#include<bits/stdc++.h>

class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int> count;

        int l = 0;
        int r = 0;
        int largest = 0;
        int res = 0;

        while (r < s.length()) {
            count[s[r]]++;
            
            largest = max(largest, count[s[r]]);
            if ((r - l + 1) - largest <= k) {
                res = max(res, r - l + 1);
            } else {
                count[s[l]]--;
                l++;
            }

            r++;
        }

        return res;
    }
};