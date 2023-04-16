// https://leetcode.com/problems/valid-anagram
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (int i = 0; i < s.size(); i++) {
            map1[s[i]]++;
            map2[t[i]]++;
        }

        for (int j = 0; j < s.size(); j++) {
            if (map1[s[j]] != map2[s[j]]) {
                return false;
            }
        }

        return true;
    }
};