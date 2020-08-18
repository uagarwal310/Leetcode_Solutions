//https://leetcode.com/problems/linked-list-cycle/submissions/
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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* , int> aa;
        while (head != NULL)
        {
            if (aa[head])
                return true;
            aa[head] = 1;
            head = head->next;
        }
        return false;
    }
};