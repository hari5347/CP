// https://leetcode.com/problems/valid-palindrome
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int j = 0;
        int k = s.size() - 1;
        
        while (j < k) {
            if (!isalnum(s[j])) {
                j++;
                continue;
            }

            if (!isalnum(s[k])) {
                k--;
                continue;
            }
               
            if (tolower(s[j]) != tolower(s[k])) 
                return false;
            j++;
            k--;
        }

        return true;
    }
};