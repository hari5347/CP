// https://leetcode.com/problems/remove-nth-node-from-end-of-list
#include<bits/stdc++.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return head;
        }

        ListNode* sptr = head;
        ListNode* fptr = head;

        int k = 0;
        while (k < n) {
            fptr = fptr->next;
            k++;
        }

        if (!fptr)
            return head->next;

        while (fptr->next) {
            fptr = fptr->next;
            sptr = sptr->next;
        }

        sptr->next = sptr->next->next;
    
        return head;
    }
};