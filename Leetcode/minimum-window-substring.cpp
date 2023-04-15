// https://leetcode.com/problems/minimum-window-substring
#include<bits/stdc++.h>

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map <char, int> svisited;
        unordered_map <char, int> tvisited;
        vector <int> res(2, 0);
        int total = 0;

        if (t == "") {
            return "";
        }

        int l = 0;
        int r = 0;

        for (auto str : t) {
            tvisited[str]++;
        }

        for (auto m : tvisited) {
            total++;
        }

        int matches = 0;
        l = 0;
        r = 0;
        int resLen = INT_MAX;

        while (r < s.size()) {
            svisited[s[r]]++;

            if (tvisited[s[r]] != 0 && tvisited[s[r]] == svisited[s[r]])
                matches++;

            while (matches == total) {
                if ((r - l + 1) < resLen) {
                    res[0] = l;
                    res[1] = r;
                    resLen = r - l + 1;
                }

                svisited[s[l]]--;
                if (tvisited[s[l]] != 0 && svisited[s[l]] < tvisited[s[l]]) 
                    matches--;
                l++;
            } 

            r++;
        }

        return (resLen == INT_MAX) ? "" : s.substr(res[0], res[1] - res[0] + 1);
    }
};