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
        ListNode *findRightPrev(ListNode *head, int right)
        {
            for(int i = 1; i < right-1; i++)
            {
                head = head->next;
            }
            return head;
        }

    public:
        ListNode* reverseBetween(ListNode* head, int left, int right)
        {
            if(left != right)
            {
                ListNode *leftNode = head;
                ListNode *rightNode = head;
                for(int i = 1; i < left; i++)
                {
                    leftNode = leftNode->next;
                }
                for(int i = 1; i < right; i++)
                {
                    rightNode = rightNode->next;
                }
                while(left < right)
                {
                    int tmp = leftNode->val;
                    leftNode->val = rightNode->val;
                    rightNode->val = tmp;
                    leftNode = leftNode->next;
                    rightNode = findRightPrev(head, right);
                    left++;
                    right--;
                }
            }
            return head;
        }
};