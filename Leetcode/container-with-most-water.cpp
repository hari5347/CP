// https://leetcode.com/problems/container-with-most-water
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxVal = 0;
        int area;

        while (l < r) {
            area = (r - l) * min(height[l], height[r]);
            maxVal = max(maxVal, area);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }

        return maxVal;
    }
};