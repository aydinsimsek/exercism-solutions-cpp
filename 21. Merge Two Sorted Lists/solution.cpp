#include <climits>

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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
        {
            ListNode *head = NULL;
            ListNode *currNode = NULL;
            int firstNum = INT_MAX;
            if(list1 != NULL)
            {
                firstNum = list1->val;
            }
            int secondNum = INT_MAX;
            if(list2 != NULL)
            {
                secondNum = list2->val;
            }
            while(list1 != NULL || list2 != NULL)
            {
                if(firstNum < secondNum)
                {
                    if(head == NULL)
                    {
                        head = list1;
                    }
                    else
                    {   
                        currNode->next = list1;
                    }
                    currNode = list1;
                    list1 = list1->next;
                    if(list1 != NULL)
                    {
                        firstNum = list1->val;
                    }
                    else
                    {
                        firstNum = INT_MAX;
                    }
                }
                else
                {
                    if(head == NULL)
                    {
                        head = list2;
                    }
                    else
                    {   
                        currNode->next = list2;
                    }
                    currNode = list2;
                    list2 = list2->next;
                    if(list2 != NULL)
                    {
                        secondNum = list2->val;
                    }
                    else
                    {
                        secondNum = INT_MAX;
                    }
                }
                
            }
            return head;
        }
};