// https://leetcode.com/problems/best-time-to-buy-and-sell-stock
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int i = 0;
        int j = 1;

        while (j < prices.size()) {
            if (prices[j] > prices[i]) {
                profit = max(profit, prices[j] - prices[i]);
                j++;
            } else {
                i = j;
                j++;
            }
        }

        return profit;
    }
};