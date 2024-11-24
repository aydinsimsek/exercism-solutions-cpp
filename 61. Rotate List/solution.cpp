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
        ListNode* rotateRight(ListNode* head, int k) 
        {
            if(head != NULL && k != 0)
            {
                int count = 0;
                ListNode *tmp = head;
                while(tmp != NULL)
                {
                    tmp = tmp->next;
                    count++;
                }
                k %= count;
                for(int i = 0; i < k; i++)
                {
                    int currVal;
                    int prevVal = head->val;
                    ListNode *currNode = head;
                    while(currNode != NULL)
                    {
                        if(currNode != head)
                        {
                            currVal = currNode->val;
                            currNode->val = prevVal;
                            prevVal = currVal;
                        }
                        currNode = currNode->next;
                    }
                    head->val = prevVal;
                }
            }
            return head;
        }
};