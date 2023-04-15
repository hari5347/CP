// https://leetcode.com/problems/valid-parentheses
#include<bits/stdc++.h>

class Solution {
public:
    bool isValid(string s) {
    forward_list <int> stack;
    vector <char> closing = {'}', ']', ')'};
    bool flag = true;

    for(auto str : s) {
        if (find(closing.begin(), closing.end(), str) == closing.end()) {
            stack.push_front(str);
        } else {
            if (stack.empty()) {
                return false;
            }

            switch (str) {
                case '}' :
                    if (stack.front() == '{') {
                        stack.pop_front();
                    } else {
                        flag = false;
                    }
                break;
                case ']' :
                    if (stack.front() == '[') {
                        stack.pop_front();
                    } else {
                        flag = false;
                    }
                break;
                case ')' :
                    if (stack.front() == '(') {
                        stack.pop_front();
                    } else {
                        flag = false;
                    }
                break;                
            }
            if (flag == false)
                break;
        }
    }

    if (stack.empty()) {
        return true;
    } else {
        return false;
    } 
    }
};