// https://leetcode.com/problems/palindrome-number
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long  rev = 0;
        int rem = 0;
        int num = x;

        while (num > 0) {
            rem = (num % 10);
            num = num / 10;
            rev = (rev * 10) + rem;
        }

        return (x == rev) ? true : false;
    }
};