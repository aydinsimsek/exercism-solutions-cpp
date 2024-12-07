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
                int count = 1;
                ListNode *tail = head;
                while(tail->next != NULL)
                {
                    tail = tail->next;
                    count++;
                }
                k %= count;
                if(k == 0)
                {
                    return head;
                }
                tail->next = head;
                for(int i = 0; i < count-k; i++)
                {
                    tail = tail->next;
                }
                head = tail->next;
                tail->next = NULL;
            }
            return head;
        }
};