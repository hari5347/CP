// https://leetcode.com/problems/longest-palindromic-substring
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
    string longest = "";
    int n = s.length();
    int j;
    string subs = "";
    string subsrev = "";

    for(int i = 0; i < n; i++){
        j = n-1;
        while(i < j){
            if((s[i] == s[j]) && (longest.length() < (j-i+1))){
               subs = s.substr(i,(j-i+1));
               subsrev = subs;
               reverse(subsrev.begin(), subsrev.end());
               if(subs == subsrev){
                  longest = subs;
               }
            }
            j--;
        }
    }

    if(longest.length() == 0){
        longest = s[0];
    }

    return longest;
    }
};