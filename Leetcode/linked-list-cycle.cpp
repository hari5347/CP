// https://leetcode.com/problems/linked-list-cycle
#include<bits/stdc++.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> umap;

        while (head != NULL) {
            if (umap[head] == 1) {
                return true;
            }

            umap[head] = 1;
            head = head->next;
        }

        return false;
    }
};