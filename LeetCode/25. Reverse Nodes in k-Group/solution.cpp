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
    private: 
        ListNode *reverseSubLists(ListNode *head, int count)
        {
            ListNode *currNode = head;
            for(int i = 0; i < count; i++)
            {
                if(currNode == NULL)
                {
                    return head;
                }
                currNode = currNode->next;
            }
            ListNode *prevNode = NULL;
            currNode = head;
            ListNode *nextNode = NULL;
            for(int i = 0; i < count; i++)
            {
                nextNode = currNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
            }
            head->next = reverseSubLists(nextNode, count);
            return prevNode; 
        }

    public:
        ListNode* reverseKGroup(ListNode* head, int k)
        {
            head = reverseSubLists(head, k); 
            return head;
        }
};