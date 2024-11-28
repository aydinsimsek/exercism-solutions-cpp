#include <unordered_map>

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
        ListNode* deleteDuplicates(ListNode* head)
        {
            if(head != NULL)
            {
                std::unordered_map<int, int> umap;
                ListNode *currNode = head;
                while(currNode != NULL)
                {
                    umap[currNode->val]++;
                    currNode = currNode->next;
                }
                currNode = head;
                ListNode *prevNode = NULL;
                while(currNode != NULL)
                { 
                    if(umap[currNode->val] > 1)
                    {
                        if(currNode == head)
                        {
                            head = currNode->next;
                        }
                        else
                        {
                            prevNode->next = currNode->next;
                        }
                    }
                    else
                    {
                        prevNode = currNode;
                    }
                    currNode = currNode->next;
                }
            }
            return head;
        }
};