// https://leetcode.com/problems/daily-temperatures
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> out(temperatures.size(), 0);
    forward_list <pair<int, int>> s;

    for (int i = 0; i < temperatures.size(); i++) {
        while (!s.empty() && temperatures[i] > s.front().second) {
            pair <int, int> temp = s.front();
            out[temp.first] = i - temp.first;
            s.pop_front();
        }
        s.push_front({i, temperatures[i]});
    }

    return out;

    }
};