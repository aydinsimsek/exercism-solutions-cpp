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
        ListNode* partition(ListNode* head, int x)
        {
            if(head == NULL)
            {
                return head;
            }
            else
            {
                ListNode* leftPartitionHead = NULL;
                ListNode* leftPartitioncurrNode = NULL;
                ListNode* rightPartitionHead = NULL;
                ListNode* rightPartitioncurrNode = NULL;
                while(head != NULL)
                {
                    if(head->val < x)
                    {
                        if(leftPartitionHead == NULL)
                        {
                            leftPartitionHead = head;
                            leftPartitioncurrNode = leftPartitionHead;
                        }
                        else
                        {
                            leftPartitioncurrNode->next = head;
                            leftPartitioncurrNode = head;
                        }
                    }
                    else
                    {
                        if(rightPartitionHead == NULL)
                        {
                            rightPartitionHead = head;
                            rightPartitioncurrNode = rightPartitionHead;
                        }
                        else
                        {
                            rightPartitioncurrNode->next = head;
                            rightPartitioncurrNode = head;
                        }
                    }
                    head = head->next;
                }
                if(leftPartitionHead == NULL)
                {
                    rightPartitioncurrNode->next = NULL;
                    return rightPartitionHead;
                }
                else if(rightPartitionHead == NULL)
                {
                    leftPartitioncurrNode->next = NULL;
                    return leftPartitionHead;
                }
                else
                {
                    rightPartitioncurrNode->next = NULL;
                    leftPartitioncurrNode->next = rightPartitionHead;
                    return leftPartitionHead;
                }
            }
        }
};