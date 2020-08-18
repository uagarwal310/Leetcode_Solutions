//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode*, int> aa;
        while (headA != NULL)
        {
            aa[headA] = 1;
            headA = headA->next;
        }
        while (headB != NULL)
        {
            if (aa[headB] == 1)
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};