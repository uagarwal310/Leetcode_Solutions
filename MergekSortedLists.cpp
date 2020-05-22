//https://leetcode.com/problems/merge-k-sorted-lists/submissions/
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
    Solution()
    {
        ios_base::sync_with_stdio(0);
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if (l1 == NULL && l2 == NULL)
            return NULL;
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        ListNode* copy1 = l1, *copy2 = l2, *nn = NULL;
        if (l1->val < l2->val)
        {
            nn = l1;
            l1 = l1->next;
        }
        else
        {
            nn = l2;
            l2 = l2->next;
        }
        ListNode* copy = nn;
        cout << nn->val;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                nn->next = l1;
                l1 = l1->next;
                nn = nn->next;
            }
            else
            {
                nn->next = l2;
                l2 = l2->next;
                nn = nn->next;
            }
        }
        while (l1 != NULL)
        {
            nn->next = l1;
            l1 = l1->next;
            nn = nn->next;
        }
        while (l2 != NULL)
        {
            nn->next = l2;
            l2 = l2->next;
            nn = nn->next;
        }
        nn->next = NULL;
        return copy;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        if (lists.size() == 0)
            return NULL;
        if (lists.size() == 1)
            return lists[0];
        ListNode* prev = lists[0];
        for (int i = 1; i < lists.size(); i++)
        {
            prev = mergeTwoLists(prev, lists[i]);
        }
        return prev;
    }
};