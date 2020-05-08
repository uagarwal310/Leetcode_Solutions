//https://leetcode.com/problems/add-two-numbers/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *head = new ListNode((l1->val + l2->val) % 10);
        ListNode* temp = head;
        int carry = (l1->val + l2->val) / 10;
        ListNode *t1 = l1, *t2 = l2;
        while (t1->next != NULL && t2->next != NULL)
        {
            t1 = t1->next;
            t2 = t2->next;
            cout << t1->val << ' ' << t2->val << ' ';
            int sum = (t1->val + t2->val + carry);
            cout << sum << endl;
            ListNode* temp1 = new ListNode(sum % 10);
            temp1->next = NULL;
            carry = (sum) / 10;
            temp->next = temp1;
            temp = temp1;
        }
        while (t1->next != NULL)
        {
            t1 = t1->next;
            ListNode* temp1 = new ListNode((t1->val + carry) % 10);
            temp1->next = NULL;
            carry = (t1->val + carry) / 10;
            temp->next = temp1;
            temp = temp1;
        }
        while (t2->next != NULL)
        {
            t2 = t2->next;
            ListNode* temp1 = new ListNode((t2->val + carry) % 10);
            temp1->next = NULL;
            carry = (t2->val + carry) / 10;
            temp->next = temp1;
            temp = temp1;
        }
        if (carry == 1)
        {
            ListNode* temp1 = new ListNode(carry);
            temp1->next = NULL;
            temp->next = temp1;
        }
        return head;
    }
};