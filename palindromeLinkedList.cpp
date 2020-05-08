//https://leetcode.com/problems/palindrome-linked-list/submissions/
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
    bool isPalindrome(ListNode* head)
    {
        ListNode *head1 = new ListNode(head->val);
        head1->next = NULL;
        ListNode *temp = head->next;
        while (temp != NULL)
        {
            ListNode *temp1 = new ListNode(temp->val);
            temp1->next = head1;
            head1 = temp1;
            temp = temp->next;
        }
        while (head1 != NULL || head != NULL)
        {
            if (head1->val != head->val)
                return false;
            head1 = head1->next;
            head = head->next;
        }
        return true;

    }
};