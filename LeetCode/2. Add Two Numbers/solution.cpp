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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
        {
            ListNode *head = NULL;
            ListNode *currNode = NULL;
            int carry = 0;
            while(l1 != NULL || l2 != NULL)
            {
                int firstDigit = 0;
                int secondDigit = 0;
                if(l1 != NULL)
                {
                    firstDigit = l1->val;
                    l1 = l1->next;
                }
                if(l2 != NULL)
                {
                    secondDigit = l2->val;
                    l2 = l2->next;
                }
                int digit = firstDigit + secondDigit + carry;
                if(digit > 9)
                {
                    carry = digit / 10;
                    digit = digit % 10;
                }
                else if(carry != 0)
                {
                    carry = 0;
                }
                ListNode* newNode = new ListNode(digit);
                if(head == NULL)
                {
                    head = newNode;
                }
                else
                {
                    currNode->next = newNode;
                }
                currNode = newNode;
            }
            if(carry != 0)
            {
                currNode->next = new ListNode(carry);
            }
            return head;
        }
};