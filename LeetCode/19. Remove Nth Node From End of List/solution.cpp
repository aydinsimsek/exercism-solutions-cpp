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

class Solution
{
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n)
        {
            int count = 0;
            ListNode *currNode = head;
            while(currNode != NULL)
            {
                count++;
                currNode = currNode->next;
            }
            if(count == n)
            {
                return head->next;
            }
            else
            {
                currNode = head;
                while(--count != n)
                {
                    currNode = currNode->next;
                }
                currNode->next = currNode->next->next;
            }
            return head;
        }
};