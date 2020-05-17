//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3331/
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
    ListNode* oddEvenList(ListNode* head)
    {
        ListNode* even = NULL, *odd = NULL, *ecopy = even, *ocopy = odd;
        int i = 1;
        while (head != NULL)
        {
            if (i % 2 == 0)
            {
                if (even == NULL)
                {
                    even = head;
                    ecopy = head;
                }
                else
                {
                    even->next = head;
                    even = even->next;
                }
            }
            else
            {
                if (odd == NULL)
                {
                    odd = head;
                    ocopy = head;
                }
                else
                {
                    odd->next = head;
                    odd = odd->next;
                }
            }
            head = head->next;
            i++;
        }
        if (ecopy != NULL)
            even->next = NULL;
        if (ocopy == NULL)
            return even;
        odd->next = ecopy;
        return ocopy;
    }
};