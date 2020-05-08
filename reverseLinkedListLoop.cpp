//https://leetcode.com/problems/reverse-linked-list/submissions/
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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL)
            return head;
        ListNode *temp=NULL;
        ListNode *temp1=head->next;
        ListNode *k=head;
        while(temp1!=NULL)
        {
            temp=head;
            head=temp1;
            temp1=head->next;
            head->next=temp;
        }
        k->next=NULL;
        return head;
    }
};