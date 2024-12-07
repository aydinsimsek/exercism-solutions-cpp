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
        ListNode *reverseSubList(ListNode *head, int count)
        {
            ListNode *prevNode = NULL;
            ListNode *currNode = head;
            ListNode *nextNode = NULL;
            for(int i = 0; i < count; i++)
            {
                nextNode = currNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
            }
            return prevNode; 
        }

    public:
        ListNode* reverseBetween(ListNode* head, int left, int right)
        {
            if(left != right)
            {
                ListNode *prevNode = head;
                ListNode *leftNode = head;
                ListNode *nextNode = head;
                for(int i = 1; i < left; i++)
                {
                    if(i == left-1)
                    {
                        prevNode = leftNode;
                    }
                    leftNode = leftNode->next;
                }
                for(int i = 1; i < right+1; i++)
                {
                    nextNode = nextNode->next;
                }
                if(leftNode != head)
                {
                    prevNode->next = reverseSubList(leftNode, right-left+1); 
                }
                else
                {
                    head = reverseSubList(leftNode, right-left+1);
                }
                leftNode->next = nextNode;
            }
            return head;
        }
};