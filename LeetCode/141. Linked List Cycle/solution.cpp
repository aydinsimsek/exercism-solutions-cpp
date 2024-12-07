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
        bool hasCycle(ListNode *head)
        {
            ListNode *slowPtr = head;
            if(slowPtr == NULL)
            {
                return false;
            }
            ListNode *fastPtr = head->next;
            if(fastPtr == NULL)
            {
                return false;
            }
            while(fastPtr->next != NULL && fastPtr->next->next != NULL)
            {
                if(fastPtr == slowPtr)
                {
                    return true;
                }
                slowPtr = slowPtr->next;
                fastPtr = fastPtr->next->next;
            }
            return false;
        }
};